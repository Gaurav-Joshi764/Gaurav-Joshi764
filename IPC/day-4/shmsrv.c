#include<stdio.h>
#include<sys/types.h>
#include<sys/sem.h>
#include<sys/shm.h>
#include<sys/ipc.h>
#include<string.h>

#define MY_KEY 199
#define SHM_SIZE 0x1000

void toggleCase(char *buf, int cnt);

union semun
{
    int val;    //valuefor SETVAL
    struct semid_ds *buf;   //buffer for IPC_STAT,IPC_SET
    unsigned short *arry;   //arry for GETALL,SETALL
    struct seminfo *__buf;  //buffer for IPC_INFO(linux specific)
};


union semun sem_union;  // used internally by the kernal

int main()
{
    int semID, shmID;
    char *pShm;
    struct sembuf smop;

    //creat a semaphore set, containing two semaphores

    semID = semget(MY_KEY,1,0660|IPC_CREAT);

    if(semID < 0)
    {
        printf("could not creat semaphore\n");
        return(1);
    }

    else
        printf("opened a semaphore ID is %d\n",semID);

    //set intial token count of both semaphore to zeros
    semctl(semID,0,SETVAL,0);

    //semctl(semID,1,SETVAL,0);

    //creat a share memory segment

    shmID=shmget(MY_KEY,SHM_SIZE,0660|IPC_CREAT);

    if(shmID<0)
    {
        printf("could not creat shared segment\n");
        return(2);
    }

    //attach shared memory segment to process address space

    pShm = shmat(shmID,NULL,0);

    if(!pShm)
    {
        printf("could not attach shared memory segment\n");
        return(3);
    }

    while(1)
    {
        //wait for a token from semaphore 0

        smop.sem_num = 0;
        smop.sem_op = -1;
        smop.sem_flg = 0;

        semop(semID,&smop,1);

        //process the message avaialable in shared memory

        printf("got the semphore\n");
        strcpy(pShm+256,pShm);

        toggleCase(pShm+256,strlen(pShm+256));

        printf("process the request message and placed responce\n");

        //send token semaphore 1

        smop.sem_num = 1;
        smop.sem_op = 1;
        smop.sem_flg = 0;

        semop(semID,&smop,1);
    }

}

void toggleCase(char *buf,int cnt)
{
    int ii;
    for(ii=0;ii<cnt;ii++)
    {
        if((buf[ii] >= 'A') && (buf[ii]<= 'Z'))
        {
            buf[ii] += 0x20;
        }

        else if((buf[ii] >= 'a') && (buf[ii]<= 'z'))
        {
            buf[ii] -= 0x20;
        }
    }
}
#include<stdio.h>
#include<sys/types.h>
#include<sys/sem.h>
#include<sys/shm.h>
#include<sys/ipc.h>
#include<string.h>

#define MY_KEY 199
#define SHM_SIZE 0x1000
#define MSG_LEN 256
#define RESP_MSG_START 256

int main()
{
    int semID, shmID;
    char *pShm;
    struct sembuf smop;

    semID = semget(MY_KEY,1,0660);

    if(semID < 0)
    {
        printf("could not creat semaphore\n");
        return(1);
    }

    else
        printf("opened a semaphore ID is %d\n",semID);


    shmID=shmget(MY_KEY,SHM_SIZE,0660);

    if(shmID<0)
    {
        printf("could not creat shared segment\n");
        return(2);
    }

    pShm = shmat(shmID,NULL,0);

    if(!pShm)
    {
        printf("could not attach shared memory segment\n");
        return(3);
    }

    while(1)
    {
        printf("Clinet: Enter some request message to send to server\n");
        fgets(pShm,MSG_LEN,stdin);

        smop.sem_num = 0;
        smop.sem_op = 1;
        smop.sem_flg = 0;
        //smop.sem_flg = SEM_UNDO;

        semop(semID,&smop,1);

        smop.sem_num = 1;
        smop.sem_op = -1;
        smop.sem_flg = 0;
        //sem.opsem_flg = SEM_UNDO;

        semop(semID,&smop,1);
        puts(pShm+RESP_MSG_START);
    }

}

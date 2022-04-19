#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/sem.h>
#include<sys/types.h>

int get_semaphore(void);
int release_semaforce(void);
int sem_id;

union semun
{
    int val;
    struct semid_ds *buf;
    unsigned short *arry;
    struct seminfo *_buf;
};

struct sembuf sem_op;
union semnum sem_union;

int main()
{
    int i,j;
    sem_id = semget((key_t)1234,1,0666|IPC_CREAT);

    for(i=0;i<=10;i++)
    {
        get_semaphore();
        printf("\nsem2:%d:got the semaphore\n",getpid());
        for ( j = 0; j <=3; j++)
        {
            sleep(1);
            printf("\a");
        }

        printf("\nsem2:%d:released the semaphore\n");
        release_semaforce();
        sleep(2);
    }

    if(semctl(sem_id,0,IPC_RMID,sem_union)<0)
    {
        printf("unable delete semaphore\n");
    }

    else
    {
        printf("semaphore deleted\n");
    }
}

int get_semaforce(void)
{
    sem_op.sem_num = 0;
    sem_op.sem_op = -1;
    sem_op.sem_flg = SEM_UNDO;

    if(semop(sem_id,&sem_op,1)<0)
    {
        printf("failed\n");
        return -1;
        //exot(-1);
    }
    //exit(-1);
}

int get_release(void)
{
    sem_op.sem_num = 0;
    sem_op.sem_op = 1;
    sem_op.sem_flg = SEM_UNDO;

    if(semop(sem_id,&sem_op,1)<0)
    {
        printf("failed\n");
        return -1;
        //exot(-1);
    }
    //exit(-1);
}
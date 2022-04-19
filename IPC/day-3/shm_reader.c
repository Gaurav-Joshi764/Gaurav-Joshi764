#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<sys/shm.h>



int main()
{
    char *r;
    int id;
    id = shmget(48,250,IPC_CREAT|0644);
    if(id<0)
    {
    perror("shget");
    }
    printf("id = %d\n",id);
    r = shmat(id,0,0);
    printf("%s\n",r);
}
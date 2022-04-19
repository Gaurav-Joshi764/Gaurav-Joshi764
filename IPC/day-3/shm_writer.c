#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>

int main()
{
    char *p;
    int id;

    id = shmget(48,250,IPC_CREAT|0644);

    if(id<0)
    {
        perror("shmget");
        return 0;
    }

    printf("id = %d\n",id);
    p = shmat(id,0,0);//PAS---user space
    printf("enter the data:");
    scanf("%s",p);

    return 0 ;
}
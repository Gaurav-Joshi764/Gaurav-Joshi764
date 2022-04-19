//example to showing how to create msgQ

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>

//#define KEY 8979

typedef struct
{
    long msgtyape;
    char buffer[100];
}msg;

main()
{
    int qid;
    int i;
    msg m1,m2;
    qid = msgget(32,IPC_CREAT|0644);

    m1.msgtyape = 10;

    for ( i = 0; i < 100; i++)
    {
        m1.buffer[i] = 'a';
        m2.msgtyape = 20;
    }

    for ( i = 0; i < 100; i++)
    {
        m2.buffer[i] = 'b';
    }

    i = msgsnd(qid,&m1,sizeof(msg),0);
    printf("return value of msgsnd of As = %d\n",i);

    i = msgsnd(qid,&m2,sizeof(msg),0);
    printf("return value of msgsnd of Bs = %d\n",i);
    
}

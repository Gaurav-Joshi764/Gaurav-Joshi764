//example showing how to get information of msgq.

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>

#define KEY 8979

main()
{
    int qid;
    struct msqid_ds buf;
    qid = msgget(49,IPC_CREAT|0644);
    printf("qid = %d\n",qid);

    msgctl(qid,IPC_RMID,NULL);
}
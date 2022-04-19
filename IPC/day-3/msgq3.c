//example showing how to get information of msgq

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<fcntl.h>
#include<string.h>

#define KEY 8979

main()
{
    int qid;
    struct msqid_ds buf;

    qid = msgget(32,IPC_CREAT|0644);
    printf("qid = %d\n", qid);

    msgctl(qid,IPC_STAT,&buf);

    printf("here are the detailes of the queue\n");
    printf("no of msg's in q %hi\n",buf.msg_qnum);

    printf("no of bytes in q %d\n", buf.msg_cbytes);

    printf("max no of bytes in q %hi\n",buf.msg_qbytes);//msg_qbytes
}

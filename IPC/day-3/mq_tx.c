#include<stdio.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<sys/types.h>

struct msgbuf
{
    long mtype;
    char data[512];
};

int main(int argc, char *argv[])
{
    struct msgbuf v; 
    struct msqid_ds buf;

    int id;

    /*argo !=3){

    printf("usage..../mq_tx msg_type data \n"); 
    printf("Example: mq_tx 5 \"hello\" \n");

    return 0;
    }*/

    id=msgget(49, IPC_CREAT|0644);

    /*if(id<0)
    { 
        perror("msgget");////tx 12 linux\0

        return 0;
    }*/

    printf("id=%d\n" ,id);

    v.mtype=atoi(argv[1]);//"12"        //Argument 1 is type of message converting ascii to int  

    strcpy(v.data, argv[2]);    //Argument 2 is message

    msgsnd(id, &v, strlen(v.data)+1, 0);//Flag IPC_NOWAIT 

    //perror("msgsnd"); // "/wrt" "type" "data"

    msgctl(id, IPC_STAT,&buf);


    printf(" Here are the details of the queue\n"); 
    printf("no of msg's in q %hi\n",buf.msg_qnum); 
    //printf("no of bytes in q %d\n",buf.msg_cbytes); 
    printf("max no of bytes in q %ht\n",buf.msg_qbytes);//msg_gbytes 
    
    return 0;


}
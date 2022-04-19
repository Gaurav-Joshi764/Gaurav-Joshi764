#include<stdio.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<sys/types.h>

struct msgbuf
{
    long msg_type;
    char mesg_text[512];
}message;

int main(int argc, char *argv[])
{
    struct msqid_ds buffer;

    int msg_id;

    msg_id = msgget(49, IPC_CREAT|0644);

    if(msg_id<0)
    { 
        perror("msgget");
        return 0;
    }

    printf("msg_id=%d\n",msg_id);

    message.msg_type = atoi(argv[1]);

    strcpy(message.mesg_text, argv[2]);    

    msgsnd(msg_id, &message, strlen(message.mesg_text)+1, 0);
    printf("Data send is : %s \n", message.mesg_text);

    msgctl(msg_id, IPC_STAT,&buffer);

    printf("The details of the queue\n"); 
    printf("Number of msg's in q %hi\n",buffer.msg_qnum); 
    printf("Number of bytes in q %hi\n",buffer.__msg_cbytes); 
    printf("Maximum number of bytes in q %hi\n",buffer.msg_qbytes);

    msgctl(msg_id,IPC_RMID,NULL);
    
    return 0;

}
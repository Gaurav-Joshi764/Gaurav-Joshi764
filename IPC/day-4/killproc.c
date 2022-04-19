//show how to send a signal to a process

#include<stdio.h>
#include<signal.h>
#include<sys/types.h>

main()
{
    pid_t pid;
    int sig_no;
    printf("enter the pid of the process for which the signal need to be sent:");
    scanf("%d",&pid);
    printf("enter the signal that need to be sent:");
    kill(pid,sig_no);

    perror("sig_res:");
}
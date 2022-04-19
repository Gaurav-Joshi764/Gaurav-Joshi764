#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void sig_handler(int signum)
{
    printf("inside handler function\n");
}

int main()
{
    pid_t pid;
    signal(SIGUSR1,sig_handler);//register signal handler
    printf("INside main function\n");
    pid = getpid();//process ID of itslef
    kill(pid,SIGUSR1);//send SIGUSR1 to itself
    printf("Inside main function\n");
    return 0;
}
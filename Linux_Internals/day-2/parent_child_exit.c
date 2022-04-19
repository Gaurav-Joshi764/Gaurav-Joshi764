#include<sys/types.h>
#include<sys/wait.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
pid_t pid;

    pid = fork();
    if(pid<0)
    {
        fprintf(stderr,"Fork failed");
        exit(-1);
    }

    else if(pid ==0)
    {
        execl("/bin/ls","ls",NULL);
    }

    else
    {
        wait(NULL);
        printf("child complete");
        exit(0);
    }

    return 0;


}
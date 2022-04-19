#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>

//handler for SIGINT and SIGTERM
static void signal_handler(int signo)
{
    if (signo == SIGINT)
        printf("Caught SIGINT!\n");
    else if(signo == SIGALRM)
        printf("Caught SIGALARM!\n");
    else
    {
        printf("caught SIGABRT!\n");
        //this should never happen
        fprintf(stderr,"Unexpected signal!\n");
        exit(EXIT_FAILURE);
    }

    exit(EXIT_SUCCESS);
}

int main(void)
{
    //register signal_handler as our signal handler for SIGINT

    if(signal(SIGINT,signal_handler) == SIG_ERR)
    {
        fprintf(stderr,"cannot handle SIGINT!\n");
        exit(EXIT_FAILURE);
    }

    alarm(4);

    //reset SIGPROF's behavior to the default
    if(signal(SIGABRT,SIG_IGN) == SIG_ERR)
    {
        fprintf(stderr,"cannot ignore SIGUP!\n");
        exit(EXIT_FAILURE);
    }

    for(;;)
    pause();

    return 0;
}
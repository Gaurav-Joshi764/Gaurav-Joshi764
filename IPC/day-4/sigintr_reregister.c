//show how to reregister signal handler

#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void sig_handler(int signum)
{
    printf("Interrupt signal trc'd ... but no termmination on ctrl+c\n ");
    signal(SIGINT,SIG_DFL); //re register signal handler for defalut action
}

int main()
{
    int i;
    signal(SIGINT,sig_handler); //register signal handler

    for(i=1;;i++)
    {
        //infint loop
        printf("%d : Inside main function\n",i);
        sleep(1);   //delay for 1 sec
    }

    return 0;
}
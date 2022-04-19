//show how to catch interrupt signak

#include<stdio.h>
#include<signal.h>

void sighand(int signum)
{
    printf("Interrupt signal trc'd ... but no termmination on ctrl+c\n ");
}

main()
{
    int i;
    //signal(SIGINT,sighand);

   signal(SIGINT,SIG_DFL);

   /* while(1)
    {

    }*/

    for(i=0;;i++)
    {
        printf("%d\n",i);
        sleep(1);
    }
}
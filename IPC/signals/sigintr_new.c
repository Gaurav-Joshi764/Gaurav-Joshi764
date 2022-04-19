//show how to catch interrupt signal

#include<stdio.h>
#include<signal.h>

void sighand(signal)
{
    printf("Interrupt signal rec'd ... but no termination on ctrl+c\n");

    //display a message indicating 
    if(signal == SIGINT)
            printf("recevied a SIGINT signal\n");

    exit(0);
}

.....
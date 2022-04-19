//gcc -o ans -pthread main.c

#include <stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void *printHello(void *threadid)
{
    printf("\nhello word\n");
    while (1);  
}

int main()
{
    pthread_t thread;
    int rc, t=0;
    printf("creating thread\n");

    rc = pthread_create(&thread,NULL,printHello,NULL);
    printf("\n thread id: %u", thread);
    sleep(6);
    t=pthread_cancel(thread);
    if(t==0)
    {
        printf("\n cancle thread\n");
    }

    printf("\n thread id: %u\n",thread);
}
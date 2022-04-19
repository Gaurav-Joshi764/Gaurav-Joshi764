#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#define NUM_THREADS

int i=0;

void *myfun(void *null)
{
    i++;
    int result=0;
    result = result + i*1000;
    printf("reslut =%d\n",result);

    pthread_exit(NULL);

}

int main(int argc, char argv[])
{
    pthread_t thread[NUM_THREADS];
    pthread_attr_t attr;    //1.. attr obj crtn
    //const pthread_attr_t attr1;

    int rc,t,status,detach_state;

    /*initialize and set thread deatch attribute*/

    pthread_attr_init(&attr);   //initz attr obj

    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);

    for(t=0;t<NUM_THREADS; t++)
    {
        printf("creating thread %d\n",t);
        pthread_create(&thread[t], &attr, myfun, NULL);
    }

    //get the defalut set by us

    pthread_attr_getdetachstate(&attr,&detach_state);
    printf("\n detach state: %d\n",(int *)detach_state);

    //pthread_attr_destroy(&attr);

    printf("\nExiting from main thread\n");
    pthread_exit(NULL);

}
//pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINBLE);
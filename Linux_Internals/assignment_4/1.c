#include<stdio.h>
#include<pthread.h>

pthread_t thread1,thread2;



void *process(void *arg)
{
    pthread_detach(pthread_self());

    printf("sleeping 2sec after creating thread\n");

    sleep(2);

    printf("slept 2 sec after excuting thread\n");
}

void call_thread(void)
{

    int errno = pthread_create(&thread2,NULL,process,NULL);

    if(errno) perror("pthread created\n");
    
    pthread_exit(NULL);
}

int main()
{
    printf("thread 1 is created\n");

    int errno = pthread_create(&thread1,NULL,process,NULL);

    if(errno) perror("pthread created");
    
    printf("thread 2 is created\n");

    call_thread();

    pthread_exit(NULL);

    return 0;
}
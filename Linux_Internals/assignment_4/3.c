#include<stdio.h>
#include<pthread.h>

pthread_once_t once = PTHREAD_ONCE_INIT;

void *myinit()
{
    printf("\nThis is init func\n");
}

void *thread(void *i)
{
    printf("\nProcess is in the Thread : %d\n",(int *)i);
    pthread_once(&once,(void *)myinit);
    sleep(2);
    printf("\nExit from thread : %d\n",(int *)i);
}

int main()
{
    pthread_t th_1,th_2,th_3;

    pthread_create(&th_1,NULL,thread,(void *)1);
    pthread_create(&th_2,NULL,thread,(void *)2);
    pthread_create(&th_3,NULL,thread,(void *)3);

    printf("\n Exit from the main thread\n");

    pthread_exit(NULL);

    return 0;

}
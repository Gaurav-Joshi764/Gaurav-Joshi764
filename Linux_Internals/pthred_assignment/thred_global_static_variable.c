#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>

int shareVar=5;

void *thread_inc(void *arg)
{
    shareVar++;
    printf("after incre=%d\n",shareVar);
}

void *thread_dec(void *arg)
{
    shareVar--;
    printf("after decr=%d\n",shareVar);

}

int main()
{
    pthread_t thread1,thread2;
    //static int x=10;

    pthread_create(&thread1,NULL,thread_inc,NULL);//thread for inc. the shared variable

    pthread_create(&thread2,NULL,thread_dec,NULL);//thread for inc. the shared variable

    pthread_join(thread1,NULL);

    pthread_join(thread2,NULL);

    printf("shareVar= %d\n",shareVar);

    return 0;
}
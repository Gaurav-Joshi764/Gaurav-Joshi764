#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>

int shareVar=5; //our share variable

pthread_mutex_t my_mutex;   //creat mutex

void *thread_inc(void *arg)
{
    pthread_mutex_lock(&my_mutex);
    shareVar++;
    //printf("after incre=%d\n",shareVar);
    pthread_mutex_unlock(&my_mutex);

}

void *thread_dec(void *arg)
{
    pthread_mutex_lock(&my_mutex);
    shareVar--;
    //printf("after decr=%d\n",shareVar);
    pthread_mutex_unlock(&my_mutex);

}

int main()
{
    pthread_t thread1,thread2;
    //static int x=10;

    pthread_mutex_init(&my_mutex,NULL);

    pthread_create(&thread1,NULL,thread_inc,NULL);//thread for inc. the shared variable

    pthread_create(&thread2,NULL,thread_dec,NULL);//thread for inc. the shared variable

    pthread_join(thread1,NULL);

    pthread_join(thread2,NULL);

    printf("shareVar= %d\n",shareVar);

    return 0;
}




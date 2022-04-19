#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>

int shareVar=5; 

pthread_spinlock_t my_mutex;   

void *thread_inc(void *arg)
{
    pthread_spin_lock(&my_mutex);
    shareVar++;
    printf("after incre=%d\n",shareVar);
    pthread_spin_unlock(&my_mutex);

}

void *thread_dec(void *arg)
{
    pthread_spin_lock(&my_mutex);
    shareVar--;
    printf("after decr=%d\n",shareVar);
    pthread_spin_unlock(&my_mutex);

}

int main()
{
    pthread_t thread1,thread2;

    pthread_spin_init(&my_mutex,NULL);

    pthread_create(&thread1,NULL,thread_inc,NULL);
    printf("main, wait a bit holing the spiun lock\n");
    sleep(5);

    pthread_create(&thread2,NULL,thread_dec,NULL);

    pthread_join(thread1,NULL);

    pthread_join(thread2,NULL);

    printf("shareVar= %d\n",shareVar);

    return 0;
}




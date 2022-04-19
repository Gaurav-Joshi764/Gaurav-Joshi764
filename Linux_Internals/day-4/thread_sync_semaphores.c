#include<stdio.h>
#include<semaphore.h>

int shareVar=5; //our share variable

sem_t my_sem;   //creat semaphore

void *thread_inc(void *arg)
{
    sem_wait(&my_sem);  //take semaphore
    shareVar++; //critical section
   // printf("after incre=%d\n",shareVar);
    sem_post(&my_sem);  //relese semaphore
}

void *thread_dec(void *arg)
{
    sem_wait(&my_sem);
    shareVar--;
   // printf("after decr=%d\n",shareVar);
    sem_post(&my_sem);
}

int main()
{
    pthread_t thread1,thread2;

    sem_init(&my_sem,0,1);  //intialize semaphore

    pthread_create(&thread1,NULL,thread_inc,NULL);//thread for inc. the shared variable

    pthread_create(&thread2,NULL,thread_dec,NULL);//thread for inc. the shared variable

    pthread_join(thread1,NULL);

    pthread_join(thread2,NULL);

    printf("sharVar = %d\n",shareVar);

    return 0;
}
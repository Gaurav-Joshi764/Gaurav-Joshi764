#include<pthread.h>
#include<stdio.h>


pthread_t tid1;
pthread_t tid2;

void* thread1(void *arg)
{
    printf("newly created thread1 is excuting \n");
    return NULL;
}

void* thread2(void *arg)
{
    printf("newly created thread2 is excuting \n");
    return NULL;
}

int main(void)
{
    int ret1 = pthread_create(&tid1,NULL,thread1,NULL);
    int ret2 = pthread_create(&tid2,NULL,thread2,NULL);


    if (ret1)
        printf("thread1 is not created\n");

    else if(ret2)
    {
        printf("thread1 is not created\n");
    }
    else 
    {
        printf("thread1 is created\n");
        printf("thread2 is created\n");


        //sleep(2);
        pthread_join(tid1,NULL);
        pthread_join(tid2,NULL);

    }

    return 0;
   
    
}
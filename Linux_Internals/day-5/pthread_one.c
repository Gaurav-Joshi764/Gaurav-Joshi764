#include<stdio.h>
#include<pthread.h>

pthread_once_t once = PTHREAD_ONCE_INIT;

void *myinit()//executes only once fro first thread
{
    printf("\n : I am init func\n");
}

void *mythread(void *i)
{
    printf("\n : I am in my Thread : %d\n",(int *)i);
    pthread_once(&once,(void *)myinit);
    //sleep(10);
    printf("\nexit from mythread : %d\n",(int *)i);
}

int main()
{
    pthread_t thread,thread1,thread2;

    pthread_create(&thread,NULL,mythread,(void *)1);
    //sleep(2);
    pthread_create(&thread1,NULL,mythread,(void *)2);
    //sleep(2);
    pthread_create(&thread2,NULL,mythread,(void *)3);

    printf("\n exit from the main thread\n");

    pthread_exit(NULL);

    return 0;

}
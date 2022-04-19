#include<stdio.h>
#include<semaphore.h>
#include<sys/types.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
#include<errno.h>
#include<bits/types.h>
#define _XOPEN_SOURCE 600

static pthread_spinlock_t spinlock;
volatile int slock;


void *spinlockThread(void *i)
{
    int rc;
    int count=0;

    printf("Enter thread %d, getting spin lock\n",(int *)i);

    rc= pthread_spin_lock(&slock);

    printf(" %d thread unlock the spin lock\n",(int *)i);

    rc= pthread_spin_unlock(&slock);

    printf(" %d thread complete\n",(int *)i);

    return NULL;

}

int main()
{
    int rc=0;
    pthread_t thread,thread1;

    if(pthread_spin_init(&slock,PTHREAD_PROCESS_PRIVATE)!=0)
    {
        perror("init");
    }

    printf("main,get spin lock\n");
    rc= pthread_spin_lock(&slock);

    printf("main, creat the spin lock thread\n");
    rc=pthread_create(&thread,NULL,spinlockThread,(int *)1);

    printf("main, wait a bit holing the spiun lock\n");
    sleep(5);

    printf("Main, now unlock the spin lock\n");
    rc=pthread_spin_unlock(&slock);

    if(rc==0)
        printf("\n main thread successfully unlocked\n");
    else
        printf("\n main thread unsuccessfully unlock\n");

    printf("main,wait for the thread to end\n");
    rc=pthread_join(thread,NULL);

    rc=pthread_spin_destroy(&slock);
    printf("main complete\n");

    return 0;
}
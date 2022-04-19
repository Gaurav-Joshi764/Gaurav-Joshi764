#include<pthread.h>
#include<stdio.h>
#include<unistd.h>

//declaration of thread condition variable
pthread_cond_t cond1 = PTHREAD_COND_INITIALIZER;

//DECLARING mutex
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

int done = 1;

// thread finction
void* foo(void *arg)
{
    char *str = (char*)arg;

    printf("thread tsak called by: %s\n",str);
    //acquire a lock

    pthread_mutex_lock(&lock);
    if(done==1)
    {
        //lets's wait on condition variable cond1
        //done=2;
        printf("wating on condition variable cond1\n");
        pthread_cond_wait(&cond1, &lock);
    }

    else
    {
        //let's signal condition variable cond1
        printf("signaling condition variable cond1\n");
        pthread_cond_signal(&cond1);
    }

    //relese lock
    pthread_mutex_unlock(&lock);
    printf("returning thread\n");

    return NULL;
}

//driver code
int main()
{
    pthread_t tid1,tid2;
    
    //creat thread1
    pthread_create(&tid1,NULL,foo,"THDone");

    //sleep for 1 sec so that thread 1
    //would get a chance to run first

    sleep(1);

    //let's wait on condition variable cond1

    done=2;

    //create thread 2
    pthread_create(&tid2,NULL,foo,"THDtwo");

    //wait for completation of thread 2
    pthread_join(tid2,NULL);

    return 0;
}//end main
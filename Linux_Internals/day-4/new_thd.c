#include<stdio.h>
#include<pthread.h>

void *process(void *arg)
{
    /*detach self*/
    pthread_detach(pthread_self());

    // peocess a clinet request.

    printf("sleeping 2sec\n");

    sleep(2);

    printf("slept 2 sec\n");

    //pthread_exit(NULL);
}

int main()
{
    pthread_t t_id;
    int errno = pthread_create(&t_id,NULL,process,NULL);

    if(errno) perror("pthread created");

    /*there may be pending requests at this point */
    /*just exit the main thread/process - not the whole program - so that remaining requests that may still be processed can continued*/

    pthread_exit(NULL);

    return 0;
}
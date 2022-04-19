#include<stdio.h>
#include<pthread.h>

void *my(void *i)
{
    printf("\n Process is in %d thread \n",(int *)i);
}

main()
{
    pthread_t tid;
    struct sched_param param;

    int priorty,policy,ret;

    /*scheduling parameter of target thread*/

    ret = pthread_getschedparam(pthread_self(),&policy,&param);
    if(ret !=0)
        perror("getschedparam");

    printf("\nMain thread\n policy: %d\t priorty: %d\n",policy,param.sched_priority);

    policy = SCHED_FIFO;

    param.sched_priority = 3;

    my(tid);


    ret = pthread_setschedparam(pthread_self(),policy,&param);

    if(ret !=0)
        perror("getschedparam");

    policy = 0;
    param.sched_priority =0;

    my(tid);

    ret = pthread_getschedparam(pthread_self(),&policy,&param);

    if(ret !=0)
        perror("getschedparam");

    printf("\nMain thread \n policy: %d\t priorty: %d\n",policy,param.sched_priority);

}
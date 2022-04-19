#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct my_thread
{
    int thread_id;
    char mesg[100];
};

void *Print(void *threadobj)
{
    pthread_t thread_ID;
    struct my_thread *t1;
    t1 = (struct my_thread *) threadobj;
    thread_ID = pthread_self();
    printf("\n Thread id is : %u", thread_ID);
    printf("\n %d Thread Message is: %s\n", t1->thread_id, t1->mesg);
}

int main()
{
    pthread_t th_2, th_3, th_4, thread_ID;
    int rc;

    struct my_thread t2, t3,t4;

    t2.thread_id=2;
    strcpy(t2.mesg, "Second Thread\n");
    t3.thread_id=3;
    strcpy(t3.mesg, "Third Thread\n");
    t4.thread_id=4;
    strcpy(t4.mesg, "Forth Thread\n");

    thread_ID = pthread_self();

    printf("\nMAIN thread ID: %u",thread_ID);

    pthread_create(&th_2,NULL,Print,(void *)&t2);
    pthread_create(&th_3,NULL,Print,(void *)&t3);
    pthread_create(&th_4,NULL,Print,(void *)&t4);


    printf("\nexit from main th_1\n");

    pthread_exit(NULL);

    return 0;
}

//gcc -o ans -pthread main.c


#include <stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


static void* threadFunc(void *arg)
{
    char *s = (char *)arg;
    printf("%s\n",s);
    sleep(5);
    return (void*)strlen(s);
    return 0;
}

int main(int argc,char *argv[])
{
    pthread_t t1;
    void *res;
    int s;

    pthread_create(&t1,NULL,threadFunc,"Hello World");


    printf("message for main()\n");

    sleep(3);
    pthread_join(t1, &res);

    printf("thread returnedv %ld\n",(long)res);

    exit(0);

}
#include <stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

pthread_t tid;


void* thr_fun(void *arg)
{
    pid_t pid;
    pthread_t tid;
    pid = getpid();
    tid = pthread_self();
    printf("process_pid %u thread_id %u \n",(unsigned int)pid,(unsigned int)tid);

    return 0;
    
}

int main(int argc,char *argv[])
{
   int err;
   err= pthread_create(&tid ,NULL,thr_fun,NULL);
   if(err!=0)
   {
       printf("can't creat thread: %s\n",strerror(err));
   }

   while(1);
   exit(0);
}

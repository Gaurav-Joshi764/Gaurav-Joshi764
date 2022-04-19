//gcc -o ans -pthread main.c


#include <stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

static void* threadFunc(void *p);

int fd;

int main()
{
    pthread_t t1, t2;

    fd= open("/etc/passwd",O_RDONLY);
    printf("file opened with fd: %d\n",fd);

    pthread_create(&t1,NULL,threadFunc,"thread one");
    pthread_create(&t2,NULL,threadFunc,"thread two");

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
}

void *threadFunc(void *p)
{
    char * str,buff[50];
    int n,pid;
    str = (char *)p;
    pid =getpid();
    printf("%s \t started now: \t for process %d \n\n",str,pid);
    do
    {
        n= read(fd,buff,100);
        printf("%s: \t read: \t %d \n\n",str,pid);
        write(1,buff,n);

        printf("\n--------------------------------\n");
        sleep(3);
    } while (n);

    printf("%s: \t finished: \t for process %d \n\n",str,pid);
    
}
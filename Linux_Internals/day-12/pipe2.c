#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
// let us assume that parent (process 1) will be writing a pipe
// 

int fds[2];

void parent_code()
{
    char *buf1="aaaaaaaaaaaaaaaaaaaaaaaa";
    char *buf="bbbbbbbbbbbbbbbbbbbbbbbb";
    close(fds[0]);

    write(fds[1],buf,20);
    write(fds[1],buf1,20);

    printf("end of parent\n");

}

void child_code()
{
    char buf[100];
    int n,i;
    close (fds[1]);

    n = read(fds[0],buf,100);
    printf("no of charts read =%d\n",n);
    for(i=0;i<n;i++)
    {
        printf("%c",buf[i]);
    }

    printf("end of child \n");

}

main()
{
    int res,i;
    pid_t p;
    res = pipe (fds);

    // fds[0] for reading and fds[1] for writing 

    if(res == -1)
    {
        perror("pipe");
        exit(1);
    }

    p = fork();

    if(p == 0)
    {
        child_code();
    }

    else
    {
        parent_code();
    }
}
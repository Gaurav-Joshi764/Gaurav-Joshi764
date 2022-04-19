#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>

int fds[2];

void parent_code()
{
    char *buf1="This is buffer one.";
    char *buf2="This is buffer two";
    close(fds[0]);

    write(fds[1],buf2,20);
    write(fds[1],buf1,20);

    printf("\nThis is parent end\n");

}

void child_code()
{
    char buf[100];
    int a,i;
    close (fds[1]);

    a = read(fds[0],buf,100);
    printf("\nNumber of charts read by child = %d\n",a);
    for(i=0;i<a;i++)
    {
        printf("%c",buf[i]);
    }

    printf("\nThis is parent end \n");

}

main()
{
    int res,i;
    pid_t p;
    res = pipe (fds);

    if(res == -1)
    {
        perror("pipe file");
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
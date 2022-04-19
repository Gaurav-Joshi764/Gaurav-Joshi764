#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char s[20];
    int fd;

    mkfifo("newfifo11",0644);   //newfifo11 is an pipe i.e a file named pipe careat fifo(named pipe)

    perror("mkfifo");

    printf("before open()..\n");
    fd = open("newfifo11",O_WRONLY);    //open fifo for wite only
    printf("after open()...\n");

    printf("enter data..\n");
    scanf("%s",s);
    //gets(s);
    write(fd,s,strlen(s)+1);    //std wt(); internally file write data to fifo
}

//fifo is pipe with name ... named pipe... will have in file system...
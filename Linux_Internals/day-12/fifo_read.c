#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int mian()
{
    char s[20];
    int fd;

    mkfifo("newfifo11",0644);   //creat fifo (named pipe)//file

    printf("before open()...\n");
    fd = open("newfifo11",O_RDONLY);    //3 file table rdr pro  // open fifo for read only

    printf("after open()...");

    read(fd,s,sizeof(s));   //read data from fifo

    printf("data: %s\n",s);

    return 0;
}
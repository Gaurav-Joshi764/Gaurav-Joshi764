#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>

int main(void)
{
    printf("server - listing");

    //creat fifo

    int code = mkfifo("cil_fifo", 0764);

    if(code == -1)
    {
        perror("mkfifo returtuned an error = file may alradey exits");
    }

    //open read end

    int fd = open("cli_ser_fifo",O_RDONLY);
    if(fd ==-1)
    {
        perror("can not open FIFO for read");
        return 0;
    }

    printf("FIFO open");

    //read string (upto 100 characters)

    char serverrcv[100];    //strung buffer
    memset(serverrcv, 0, 100);  //set ser buffer with zeros

    int res;
    char Len;

    while (1)
    {
        res = read(fd,&Len,1);
        if(res == 0)
        {
            break;
        }

        read(fd,serverrcv,Len);

        //serverrcv[(int)Len] = 0;

        printf("server recived: %s\n",serverrcv);
    }

    printf("EOF reached");

    close(fd);

    printf("FIFO closed");

    return 0;
    
}
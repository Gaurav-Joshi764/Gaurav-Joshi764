#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/time.h>

main()
{
    int fd1,fd2;

    fd_set read_set, write_set, except_set;
    char buf[10];

    struct timeval timeout;

    int n;
    timeout.tv_sec = 90;

    fd1 = open("./tsrv",O_RDWR);
    fd2 = open("./tcli",O_RDWR);

    FD_ZERO(&read_set);
  //  FD_ZERO(&write_set);
   // FD_ZERO(&except_set);

   FD_SET(fd1,&read_set);
   FD_SET(fd2,&read_set);

   n = select(FD_SETSIZE,&read_set,NULL,NULL,&timeout);

   if(n<0)
   {
       perror("select");
       exit(1);
   }

   printf("number of descriptor ready = %d\n",n);

}
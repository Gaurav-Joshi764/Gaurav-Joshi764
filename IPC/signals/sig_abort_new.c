//sjow an example of when sigabort will be genreted

#include<stdio.h>
#include<stdlib.h>
#include<signal.h>

void abort_hanlder(int);

void main()
{
    if(signal(SIGABRT,abort_hanlder) == SIG_ERR)
    {
        fprintf(stderr,"couldn't set signal handler\n");
        exit(1);
    }

    //signal(SIGINT,SIG_DFL);
    abort();
    exit(0);
}

void abort_hanlder(int i)
{
    fprintf(stderr,"CAUGHT SIGABRT, exiting application\n");
    exit(1);
}
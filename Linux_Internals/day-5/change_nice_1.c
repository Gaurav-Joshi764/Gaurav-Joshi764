#include<stdio.h>
#include<unistd.h>
#include<errno.h>


int main()
{
    int ret,i,cnt=0;
    errno=0;
    ret = nice(10); //nice() used to assign nice values to a particuler(incr/decr/priorty of a process)

    if(ret == -1 && errno !=0)
    {
        perror("nice");
    }
    else
    {
        printf("nice value is now: %d\n",ret);
    }

    while(1)
    {
        printf("process with nice value %d cout= %d\n",ret, cnt);
        for(i=0; i<10000000; i++);
        cnt++;
    }
}

//dual core==> make use of only one cpu... on one cpu i execute 2 process.. nice value same... each process 50% cpu usage.
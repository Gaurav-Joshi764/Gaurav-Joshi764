#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>

int main()
{
    int p[2];//p[0],p[1] indexes or subscripting of arry p

    pipe(p);//fd0 --p[0]rd end  and fd1 --p[1]wt end

    printf("read end of pipe = %d \t write end of pipe = %d\n ",p[0],p[1]);// 3,4,...0 1 2 OS
    if(fork())                      //parent..chd       pid     fork        child..0
    {   //parent
        char s[20];
        printf("in parent enter data..\n");
        scanf("%s",s);//wait user enter "15 +1"
        write(p[1],s,strlen(s)+1);
    }

    else    //child--0
    {
        char buf[20];
        printf("in child...\n");
        read(p[0],buf, sizeof(buf));
        printf("child pro printing .. data of the parent process.. %s\n",buf);
    }

    return 0;
}
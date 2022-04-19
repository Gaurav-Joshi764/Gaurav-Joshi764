#include<sys/types.h>
#include<sys/wait.h>
#include<stdio.h>


int main()
{
	pid_t pid;
	
	int option,stat;

	while(1)
	{
		printf("ENter 1 to exec 'ls' program in child process");

        scanf("%d",&option);
        if(!option)
        {
            exit(0);
        }
        printf("\n");

        if(fork()==0)
        {
            execl("/bin/ls","ls",0);
            exit(0);
        }

	}

    return 0;
}
#include<stdio.h>
#include<unistd.h>

int main()
{

	printf("I'm going to execute an 'ls'program\n");
	
	execl("bin/ls","-lh",0);

	printf("i excute ls program");
	printf("i excute ls program");
	printf("i excute ls program");
return 0;
}

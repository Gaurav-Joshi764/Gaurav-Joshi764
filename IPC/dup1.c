#include<stdio.h>
#include<fcntl.h>

int main()
{

	int fd1,fd2,fd3,fd4;
	//umask(0);
	fd1=open("linux.txt",O_WRONLY|O_CREAT|O_TRUNC,0777);
	fd2=open("linux9NEW.txt"O_WRONLY|O_CREAT|O_TRUNC,0777);
	
	printf("");
}

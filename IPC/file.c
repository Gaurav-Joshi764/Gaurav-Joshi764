// C program to illustrate
// open system call
#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
//extern int errno;
int main()
{	

	int fd,len;
	int x;
	char write_buf[60]="Linux kernal new program ? wow?";
	
	// if file does not have in directory
	// then file foo.txt is created.
	 fd = open("foo1.txt",  O_CREAT | O_RDWR, 0777);
	
	/*printf("fd = %d/n", fd);
	
	if (fd ==-1)
	{
		// print which type of error have in a code
		printf("Error Number % d\n", errno);
		
		// print program detail "Success or failure"
		perror("Program");				
	}*/


	write(fd,write_buf,60);//from write_buf wting to fd

	close(fd);
	return 0;
}


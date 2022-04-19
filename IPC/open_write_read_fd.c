#include<stdio.h>
#include<fcntl.h>
#include<errno.h>

int main()
{
	int fd,len;
	char write_buf[60]="Linux kernal new program ? wow?";
	char read_buf[50];

	
	// if file does not have in directory
	// then file foo.txt is created.
	 fd = open("test.txt",  O_CREAT | O_RDWR, 0777);

	len = write(fd,write_buf,50);

	printf("write value from write optn =%d\n", len);

	lseek(fd,0,SEEK_SET);

	read(fd,read_buf,len);
	printf("data from buffer read opt =%d\n", read_buf);

	close(fd);

	return 0;

}

#include<stdio.h>
#include<unistd.h>

int main()
{
	int ret;
	ret=execl("/user/bin/vi","vi","info.txt",0);
	if(ret==-1)
		printf("execl returned error %d\n",ret);

return 0;
}

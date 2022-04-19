#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>

int main()
{
	int shmid = shmget(48,250,IPC_CREAT|0644);

    if(shmid<0)
    {
        perror("shmget");
    }

    printf("id = %d\n",shmid);

	char *str = (char*) shmat(shmid,(void*)0,0);

	printf("enter the data:");
    scanf("%s",str);

	printf("Data written in memory: %s\n",str);
	
	shmdt(str);

	return 0;
}

#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>

int main()
{
	int shmid = shmget(48,250,IPC_CREAT|0644);

     if(shmid<0)
    {
        perror("shget");
    }

    printf("id = %d\n",shmid);

	char *str = (char*) shmat(shmid,(void*)0,0);

	printf("Data read from memory: %s\n",str);
	
	shmdt(str);
	
	shmctl(shmid,IPC_RMID,NULL);
	
	return 0;
}

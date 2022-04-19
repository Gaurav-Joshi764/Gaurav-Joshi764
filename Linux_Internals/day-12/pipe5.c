#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(void)
{
    int i,fd[2],nbytes;
    pid_t childpid;
    char string[] = "linux kernal technology\n";
    char readbuffer[50];

    pipe(fd);

    if((childpid = fork())== -1)
    {
        perror("fork");
        exit(1);
    }

    if(childpid == 0)
    {
        //child process closes up input side of pipe
        close(fd[0]);

        //send "string" through the output side of pipe

        write(fd[1],string, (strlen(string)+1));
        exit(0);
    }

    else
    {
        //parent process closes up output side of pipe
        close(fd[1]);

        //read in a string from the pipe
        nbytes = read(fd[0], readbuffer, sizeof(readbuffer));

        for(i=0;readbuffer[i];i++)
        {
            if(readbuffer[i] >= 'a' && readbuffer[i] <= 'z')
                readbuffer[i] = readbuffer[i] -32;
        }

        printf("received string : %s",readbuffer);
    }

    return 0;
}
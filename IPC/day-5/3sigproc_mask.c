//this is demostrates how to block signal using sigprocmask()

#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>

//Iterates through a list of signal and prints out which signals are in a signal set.

void printSignalSet(sigset_t *set)
{
    //this listing of signals may be incomplete
    const int sigList[] = {SIGHUP,SIGINT,SIGQUIT,SIGILL,SIGABRT,SIGFPE,SIGKILL,SIGSEGV};

    const char *sigNames[] = {"SIGHUP","SIGINT","SIGQUIT","SIGILL","SIGABRT","SIGFPE","SIGKILL","SIGSEGV"};

    const int sigLen = 8;

    for (int i = 0; i <sigLen; i++)
    {
        int ret = sigismember(set,sigList[i]);
        if(ret == -1)
        {
            perror("sigismember");
            exit(EXIT_FAILURE);
        }

        else if(ret == 1)
        {
            printf("Signal %s = %d is in the set\n",sigNames[i],sigList[i]);
        }

        else
        {
            printf("Signal %s = %d is not in the set\n",sigNames[i],sigList[i]);

        }
    }
    
}

int main()
{
    sigset_t set;

    if(sigprocmask(0,NULL,&set) != 0)
    {
        perror("sig procmask");
        exit(EXIT_FAILURE);
    }

    printf("---Initial signal mask for this process: ---\n");

    printSignalSet(&set);

    //#if 1

    if(sigaddset(&set,SIGINT) != 0)//add SIGINT to our set
    {
        perror("sig addset");
        exit(EXIT_FAILURE);

    }

    //tell OS that we want to mask our new set of signals--which now includes SIGINT
    if(sigprocmask(SIG_SETMASK,&set,NULL) != 0)
    {
        perror("sig procmask");
        exit(EXIT_FAILURE);
    }

    //now , SIGINT will be "blocked"

    printf("---new signal mask for this process:---\n");
    printSignalSet(&set);

    //#endif

    int secToSleep = 20;
    printf("try Ctrl+c. try killing this program with 'Kill -kill %d'. going to sleep for %d seconds.\n",getpid(),secToSleep);
    sleep(secToSleep);
    printf("sleep returned.\n");

    printf("removing all signals from mask.\n");
    //sigemptyset(&set);

    sigfillset(&set);
    sigprocmask(SIG_SETMASK,&set,NULL);

    printSignalSet(&set);

    sleep(1);

    printf("Exited normally\n");

    return 0;
}

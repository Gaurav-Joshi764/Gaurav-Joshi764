#include<signal.h>
#include<stdio.h>



void check_blocked_signs(sigset_t s)
{
int i,res;
for(int i=0;i<5;i++)
{
res = sigismember(&s,i);
if(res)
{
printf("signal %d is blocked\n",i);
}
else
{
printf("signal %d is not blocked\n",i);
}
}
}



void sighand(int no)
{
printf("I am in sighandler\n");
}



main()
{
sigset_t s_set,s;
sigemptyset(&s_set);
sigaddset(&s_set,2);
sigaddset(&s_set,4);
sigprocmask(SIG_BLOCK|SIG_SETMASK,&s_set,NULL);
printf("Send me signal one and see the effect now \n");
getchar();
getchar();
sigpending(&s);
check_blocked_signs(s);
getchar();
sigprocmask(SIG_UNBLOCK,&s_set,NULL);
printf("Now signals are unblocked\n");
while(1);





}


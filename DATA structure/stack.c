#include<stdio.h>

int push(int [],int *,int,int);

int pop(int a[], int *t);

void main()
{

int n=3;
int s[n],top=0;
int x;

	while(1)
	{
		printf("enter elemnet to push\n");
		scanf("%d",&x);

		if(push(s,&top,x,n)==0)
			break;
		else
			printf("elemt pushed\n");

	}
	
/* this loop is for only print push elemets*/

	/*for(int i=n;i>=1;i--)
	{
		printf("\nstack is %d",s[i]);
	}*/

	while(1)
	{
		int p=pop(s,&top);
		if(p!=0)
			printf("%d",p);
		else
			break;
	}

}



int push(int a[], int *t, int e, int n)
{
	if(*t<n)
	{
		*t=*t+1;
		a[*t]=e;
		printf("top is %d\n",*t);
		return 1;
	}

	else
	{
		printf("stack overflow");
		return 0;
	}
}

int pop(int a[],int *t)
{
	if(*t==0)
	{
		printf("stack underflow\n");
		return 0;
	}

	else
	{
		*t=*t-1;
		return a[*t+1];
	}
}

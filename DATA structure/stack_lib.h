/***************************************************************************************/
/*for integer return*/

int push(int a[], int *t, int e, int n)
{
	if(*t<n)
	{
		*t=*t+1;
		printf("top is %d\n",*t);
		a[*t]=e;
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

int peep(int a[], int *t,int i)
{
	if(*t-i+1<=0)
	{
		printf("stack underflow\n");
		return 0;
	}

	else
	{
		return a[*t-i+1];
	}	
}

int change(int a[], int *t,int i, int x)
{
	if(*t-i+1<=0)
	{
		printf("stack underflow\n");
		return 0;
	}

	else
	{
		a[*t-i+1]=x;
		return 1;
	}
}

/***************************************************************************************/
/*for charcter return*/

int push(char a[], int *t, char e, int n)
{
	if(*t<n)
	{
		*t=*t+1;
		printf("top is %d\n",*t);
		a[*t]=e;
		return 1;
	}

	else
	{
		printf("stack overflow");
		return 0;
	}
}

char pop(char a[],int *t)
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

char peep(char a[], int *t,int i)
{
	if(*t-i+1<=0)
	{
		printf("stack underflow\n");
		return 0;
	}

	else
	{
		return a[*t-i+1];
	}	
}

int change(char a[], int *t,int i, char x)
{
	if(*t-i+1<=0)
	{
		printf("stack underflow\n");
		return 0;
	}

	else
	{
		a[*t-i+1]=x;
		return 1;
	}
}


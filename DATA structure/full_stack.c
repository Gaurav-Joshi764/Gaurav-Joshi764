#include<stdio.h>
#include"stack_lib.h"

void main()
{
	int n=3;
	int s[n+1],top=0;
	int x;
	int o=0;
	int i;

	printf("Welcome to stack operations\n");

	while(o<5)
	{
		printf("1.push\n 2.pop\n 3.peep\n 4.change\n 5.quit")
		sacnf("%d",&o);

		switch(o)
		{
			case 1:
			printf("enter elements to push\n");
			sacnf("%d",&x);
			push(s,&top,x,n);
			break;

			case 2:
			printf("element at top of stack is %d\n",pop(s,&top));
			break;

			case 3:
			printf("enter position\n");
			scanf("%d",&i);
			printf("element at %d position is %d\n",i,peep(s,&top,i));
			break;

			case 4:
			printf("enter position and value that need to updated\n");
			sacnf("%d  %d",&i,&x);
			change(s,&top,i,x);
			break;

			case 5:
			printf("thank you\n");
			break;

			default:
			break;
		
		}
	}
}




#include<iostream>
using namespace std;

int sum(int s)
{
	return s;
}

int sum(int s, int x)
{
	return s+x;
}


int sum(int s, int x,int y)
{
	return s+x+y;
}


int main()
{
	cout<<"the sum is: "<<sum(5)<<endl<<endl;
	cout<<"the sum is: "<<sum(5,5)<<endl<<endl;
	cout<<"the sum is: "<<sum(5,5,5)<<endl<<endl;

return 0;
}

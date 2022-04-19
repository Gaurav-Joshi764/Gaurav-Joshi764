
// C++ program to find max number

#include <iostream>
using namespace std;

int& max(int &, int &);
int main()
{
	int a=5,b=6,ans;
	ans = max(a,b);
	cout<<"Maximum = " << ans;
}

int& max (int &x, int &y)
{
	if(x>y)
		return x;
	else
		return y;
}

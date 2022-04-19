#include <iostream>
using namespace std;


class base
{
	int i,j;
	public:
	void set(int a, int b)
	{
		i=a;
		j=b;
	}

	void show()
	{
		cout<<i<<""<<j;
	}
};

class deliverd: private base
{
	int k;
	public:
	deliverd(int x)
	{
		k=x;
	}

	void show()
	{
		cout<<k;
	}

};

int main()

{
	base ob;
	ob.set(1,2);
	ob.show();

return 0;
}

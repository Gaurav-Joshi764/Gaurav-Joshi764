#include <iostream>
using namespace std;


class base
{
	protected:
	int i,j;
	public:
	void set(int a, int b)
	{
		i=a;
		j=b;
	}

	void show()
	{
		cout<<i<<""<<j<<"\n";
	}
};

class derived1: private base
{
	int k;
	public:
	
	void set()
	{
		k=i*j;
	}

	void show()
	{
		cout<<k<<"\n";
	}

};

class derived2 : public derived1
{
	int m;
	public:
	void set()
	{
		m=i-j;
	}

	void show()
	{
		cout<<m<<"\n";
	}
};

int main()

{
	derived1 ob1;
	derived2 ob2;

	ob1.set(1,2);
	ob1.show();
	ob2.set(3,4);
	ob2.show();

return 0;
}

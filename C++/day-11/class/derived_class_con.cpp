#include <iostream>
using namespace std;

class base
{
	int x;
	public:
	base(){cout<<"base defalut constructor";}
};

class derived : public base
{
	int y;
	public:
	derived(){cout<<"\nderived class defalt constructor";}
	derived(int i){cout<<"\nderived class perameterized constructor";}
};

int main()
{
	base b;
	derived d1;
	derived d2(10);

return 0;
}




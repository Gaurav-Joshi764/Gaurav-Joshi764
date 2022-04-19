#include <iostream>
using namespace std;

class abc
{
	public:
	void display()
	{
		cout<<"this is parent class"<<"\n";
	}


};

class xyz: public abc
{

	public:
	void display()
	{
		cout<<"this is child class"<<"\n";
	}
};

int main()
{

	xyz x;
	x.display();
	x.abc::display();

return 0;
}

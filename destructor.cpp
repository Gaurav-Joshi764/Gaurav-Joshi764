#include<iostream>

using namespace std;

class distance{

	public:
	int feet;
	int inch;

		distance(intx,int y)
		{
			cout<<"feet is"<< x<< "inch is"<< y<< endl;
		}

		~distance()
		{
			cout<<"destructor called"<;
		}

};

int main()
{
	distance d1(5,8);

	return 0;
}

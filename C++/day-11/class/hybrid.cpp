#include <iostream>
using namespace std;

class A
{
 	public:
 	int i;
};
class B : virtual public A
{
 	public:
 	int j;
};
class C: public virtual A
 {
	public:
	int k;
};
class D : public B, public C   
{
 	public:
 	int sum;
};

int main()
{
         D ob1;          //object of derived class D
 	ob1.i=10;
	ob1.j=20;
	ob1.k=30;

	ob1.sum=ob1.i+ob1.j+ob1.k;
	cout<<ob1.sum;
 	return 0;
}         

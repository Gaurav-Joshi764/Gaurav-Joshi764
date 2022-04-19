#include<iostream>

using namespace std;

class calculator
{
	public:
		int input1;
		int input2;

		void setinput(int a, int b)
		{
			input1=a;
			input2=b;
		}

		int add()
		{
			return input1+input2;
		}

};

int main ()
{
	calculator obj1;
	obj1.setinput(10,2);

	cout<<"the input: "<< obj1.input1<< "  " << obj1.input2<<endl;
	cout<<"the sum of input is: "<<obj1.add();

	return 0;
}

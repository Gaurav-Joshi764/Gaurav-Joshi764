#include<iostream>

using namespace std;

class calculator
{
	public:
		int input1,input2;

		void setinput(int a, int b)
		{
			input1=a;
			input2=b;
		}

		int add();

		int sub()
		{
			return input1-input2;
		}

		int div()
		{
			return input1/input2;
		}

		int mul()
		{
			return input1*input2;
		}

		int fact()
		{
			int fact=1;
			for(int i=1;i<=input1;i++)
			{
				fact=fact*i;
			}
			return fact;
		}

		int avg()
		{
			return (input1+input2)/2;
		}

};

int calculator :: add(calculator obj1, calculator)
{
	return obj1.input1+obj2.input2;
}

int main ()
{
	calculator obj1,obj2;
	int choice;

	obj1.setinput(10,2);
	obj2.setinput(5,5);

	cout<<"the input: "<< obj1.input1<< "  " << obj1.input2<<endl;
	cout<<"the sum of input is: "<<obj1.add(obj1, obj2);

	return 0;
}

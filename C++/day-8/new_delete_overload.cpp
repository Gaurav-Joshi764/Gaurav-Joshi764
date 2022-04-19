#include<iostream>
using namespace std;

class CustomMemory
{
	int i;  // size of int is 4 byte

public:
	CustomMemory()
	{
		cout<<"Constructor"<<"\n";
	}

	~CustomMemory()
	{
		cout<<"Destructor"<<"\n";
	}

	//Overloaded new
	void* operator new(size_t objectSize)
	{
		cout<<"Custom memory allocation"<<"\n";
		//Write allocation algorithm here
		return malloc(objectSize);
	}

	//Overloaded 2 arguments new operator
	void* operator new(size_t objectSize, int x)
	{
		cout<<"Custom 2 argument memory allocation"<<"\n";
		CustomMemory *ptr =(CustomMemory*)malloc(objectSize);
		ptr->i = x;
		return ptr;
	}

	//Overloaded delete
	void operator delete(void* ptr) {
		cout<<"Custom memory de- allocation"<<"\n";
		free(ptr);
	}
	void Display(){
		cout<<"Value of i ="<<i<<"\n";
	}
};
int main(){

	// call overloaded new from the class
	CustomMemory *obj = new CustomMemory();

	// call overloaded delete
	delete obj;

	//overloaded 2 argument new
	CustomMemory * ptr = new(5)CustomMemory();

	ptr->Display();
	delete ptr;

	return 0;
}

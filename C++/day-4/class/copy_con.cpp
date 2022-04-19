// copy constructor calls mad by compiler

#include<iostream>
using namespace std;

class A
{
private:
    int i=10;

public:
    A()
    {
        cout<< "Inside the constructor" << endl <<endl;
    }

    A(A &obj)
    {
        cout << "Inside the copy constructor " << endl << endl;
    }

    void add(A obj1, A obj2)
    {
        cout << "Inside the ADD() function" << endl << endl;
    }

    A add_ret()
    {
        A temp;
        cout << "Inside the ADD_RET() function" << endl << endl;
        return temp;
    }
};

int main()
{
    A obj1,obj2;
 //   A obj2 = obj1;
//    obj1.add(obj1,obj1);
    obj2 = obj1.add_ret();

    return 0;
}

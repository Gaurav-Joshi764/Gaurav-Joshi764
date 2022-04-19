#include<iostream>

using namespace std;
class Number
{
 private:
     int a;

 public:
     Number(int n)  //default constructor
     {
        a=n;
     }
     Number(Number &x)
     {
        a=x.a;
        cout<<"copy constructor is invoked" << endl;
     }
     void display()
     {
        cout<<"value of a:"<<a<<endl;
     }
};

int main()
{
     Number N1(100); // create an object and assign value to member variable
     Number N2(N1); // invoke user defined copy constructor

     N1.display ();
     N2.display ();

     return 0;
}

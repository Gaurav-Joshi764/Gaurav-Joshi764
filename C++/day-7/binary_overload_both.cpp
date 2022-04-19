//C++ program to illustrate binary operator overloading using member function and friend function

#include<iostream>
using namespace std;

class complex
{
 private:
  int real,imag;
 public:
  void getvalue()
  {
   cout<<"Enter the value of real number:";
   cin>>real;
   cout<<"Enter the value of imaginary number:";
   cin>>imag;
  }

  //Overloading '+' operator uisng friend function
  friend complex operator+(complex obj1, complex obj2);
 
  complex operator-(complex obj)
  {
   complex temp;
   temp.real=real-obj.real;
   temp.imag=imag-obj.imag;
   return(temp);
  }
  void display()
  {
   cout<<real<<"+"<<"("<<imag<<")"<<"i"<<"\n";
  }
};

complex operator+(complex obj1, complex obj2)
  {
   complex temp;
   temp.real=obj1.real+obj2.real;
   temp.imag=obj1.imag+obj2.imag;
   return(temp);
  }

int main()
{
  complex c1,c2,c3,c4;

  c1.getvalue();
  c2.getvalue();

  c3 = c1+c2;
  c4 = c1-c2;


  cout<<"Result is:\n";
  c3.display();
  c4.display();

 return 0;
}

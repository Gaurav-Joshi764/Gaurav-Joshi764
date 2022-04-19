//C++ program to illustrate the use of unary operator overloading, increment ++ and decrement -- operator overloading

#include <iostream>
using namespace std;

class check_count
 {
   public:
     int count_plus;
     int count_minus;

     check_count()
     {
       count_plus = 0;
       count_minus = 2;
     };
     void operator ++() 
	{
		 ++count_plus; 	// count increment
	} 
     friend check_count operator --(check_count &y,int); 
 };

check_count operator --(check_count &y,int)
{
	 y.count_minus--; // count increment
	 return y;
}

int main()
 {
   check_count x, y; //creating objects

   //before increment/decrement
   cout << "x =" << x.count_plus<<"\n";
   cout <<"y =" << y.count_minus<<"\n";

   ++x;
   y--;

   //after increment/decrement
   cout<<"\nAfter increment/decrement\n";
   cout<<"x ="<<x.count_plus<<"\n";
   cout<<"y ="<<y.count_minus<<"\n";
 return 0;
}

//C++ program to create inline function that returns cube of given number

#include <iostream>
using namespace std;

inline int cube(int s)
{
   /* int i=10;
    i++;
    cout<<i;
    cout<< "Inside the function" << endl << endl;
    */
    return s*s*s;
}
int main()
{
    cout << "The cube of 3 is: " << endl <<cube(3);

    return 0;
}

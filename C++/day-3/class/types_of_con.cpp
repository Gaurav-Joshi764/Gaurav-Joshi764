//Constructor Overload

#include <iostream>

using namespace std;

class rectangle
{
    int length, width;
    public:
        rectangle() // Default constructor
        {
            length=0;
            width=0;
            cout<<"Default Constructor"<<endl;
        }
        rectangle(int x, int y) // Parameterized constructor
        {
            length = x;
            width = y;
            cout<<"Parameterized Constructor"<<endl;
        }
        rectangle(rectangle &_r)    // Copy constructor
        {
            length = _r.length;
            width = _r.width;
            cout<<"Copy Constructor"<<endl;
        }
};

int main()
{
    rectangle r1; // Invokes default constructor
    rectangle r2(10,20); // Invokes parameterized constructor
    rectangle r3(r2); // Invokes copy constructor

    return 0;
}

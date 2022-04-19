//static data member

#include <iostream>

using namespace std;

class item
{
    int number;
    static int count;   // static variable declaration
    public:
        void getdata(int a)
        {
            number = a;
            count++;
        }
        void getcount()
        {
            cout<<"\nvalue of count: "<<count;
        }
};

int item :: count;  // static variable definition

int main()
{
    item a,b,c;

    a.getdata(100);
    a.getcount();

    b.getdata(200);
    a.getcount();

    c.getdata(300);
    a.getcount();

    return 0;
}

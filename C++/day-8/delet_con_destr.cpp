#include<iostream>
#include<stdlib.h>

using namespace std;

class call
{
public:
    int x=0,y=0;

    call()
    {
        cout<<"constructor called"<<endl;
    }

    ~call()
    {
        cout<<"Destructor called"<<endl;
    }
};

int main()
{
    call a1, *a2;
    a2 = new call[5];

    cout<<a1.x<<endl;
    cout<<a1.y<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<a2[i].x<<endl;
        cout<<a2[i].y<<endl;
    }

   // delete [] a2;
   // a2=(in *) malloc(sizeof(call)*5);

    return 0;
}

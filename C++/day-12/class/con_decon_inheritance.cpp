#include <iostream>
using namespace std;

class base1{
    protected:
    int i;

    public:
    base1(int x)
    {
        i=x; 
        cout<<"constructing base1";
    }
    ~base1()
    {
        cout<<"destructing base1\n";
    }
};

class base2{
    protected:
    int k;

    public:
    base2(int x)
    {
        k=x;
        cout<<"constructor base2";
    }

    ~base2()
    {
        cout<<"destructing base2\n";
    }
};

class derived: public base1,public base2
{
    int j;
public:
    derived(int x,int y,int z): base1(y),base2(z)
    {
        j=x;
        cout<<"constructor derived\n";
    }
    ~derived()
    {
         cout<<"destructing delivered\n";
    }

    void show()
    {
        cout<<i<<" "<<j<<" "<<k;
    }
};

int main()
{
    derived ob(3,4,5);
    ob.show();

    return 0;
}
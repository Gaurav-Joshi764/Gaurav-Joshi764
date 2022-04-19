#include<iostream>
using namespace std;

class test
{
    int x;

    public:

        void read()
        {
            cout<<"enter a number=";
            cin>>x;
        }

        class EVEN{}; // abstract class for exception
        class ODD{};

        void check()
        {
            if(x%2==0)
            {
                throw EVEN(); //rise exception
            }
            else
            {
                throw ODD();    //raise exception
            }
        }
};

int main()2

{
    test t;
    t.read();

    try
    {
        t.check();
    }
    catch(test :: EVEN) //eception hanlder block
    {
        cout<<"number is even";
    }
    catch(test :: ODD)
    {
        cout<<"number is odd";
    }

    return 0;
}
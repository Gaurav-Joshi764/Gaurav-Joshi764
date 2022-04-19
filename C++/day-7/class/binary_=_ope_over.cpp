#include<iostream>

using namespace std;

class complex
{
    int r,i;

    public:

        complex ()
        {
            r=i=0;
        }

        complex (int x, int y)
        {
            r=x;
            i=y;
        }

        void display()
        {
            cout <<"\nreal="<<r<<endl;
            cout<<"imag="<<i<<endl;
        }

        int operator==(complex);
};

int complex::operator ==(complex c)
{

    if(r==c.r && i==c.i)
        return 1;
    else
        return 0;

}

int main()
{
    complex c1(5,3),c2(5,3);
    if
        (c1==c2) cout<<"objects are equal";
    else
        cout<<"objects are not equal"; return 0;

    return 0;
}

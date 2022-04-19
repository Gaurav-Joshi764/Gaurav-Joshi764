//Parameterized Constructor

#include <iostream>

using namespace std;

class dis
{
public:
    int feet,inch;
    dis(int f,int i)
    {
        feet = f;
        inch = i;

        cout<< "feet: "<< feet << "inches: "<< inch << endl;
    }
};

int main()
{
    int f,i;

    cout<<"Enter feets and inches: "<< endl;
    cin>> f >> i;

    dis d1(f,i);

    return 0;
}

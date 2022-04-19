// Demonstration of function overloading

#include <iostream>

using namespace std;

int sum(int i)
{
    return i;
}

int sum(int i, int j)
{
    return (i+j);
}

int sum(int i, int j, int k)
{
    return (i+j+k);
}

int main()
{
    cout << "Sum: "<< sum(1)<< endl;
    cout << "Sum: "<< sum(1,2)<< endl;
    cout << "Sum: "<< sum(1,2,3)<< endl;

    return 0;
}

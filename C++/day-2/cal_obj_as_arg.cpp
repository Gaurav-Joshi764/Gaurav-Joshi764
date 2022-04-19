#include <iostream>

using namespace std;

class Calculator
{
    public:
        int input1;
        int input2;

    void setInput(int a, int b)
    {
        input1 = a;
        input2 = b;
    }

    int add(Calculator obj1, Calculator obj2)
    {
    return obj1.input1 + obj2.input1;
    }

};

int main()
{
    Calculator obj1, obj2;

    obj1.setInput(10,2);
    obj2.setInput(5,5);

    cout << "The inputs: " << obj1.input1 << " " << obj1.input2 <<endl;
    cout << "The sum of inputs is: " << obj1.add(obj1, obj2);

    return 0;
}

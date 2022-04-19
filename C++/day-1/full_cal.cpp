#include<iostream>

using namespace std;

class cal
{
public:
    int n1,n2;

    void setInput(int a,int b)
    {
        n1=a;
        n2=b;
    }

    int add()
    {
        return n1+n2;
    }

    int mul()
    {
        return n1*n2;
    }

    int sub()
    {
        return n1-n2;
    }

    int div()
    {
        return n1/n2;
    }

    int fact()
    {

        int fact =1;
        for(int i=1;i<=n1;i++)
        {
            fact=fact*i;
        }
        return fact;
    }

    int avg()
    {
        return (n1+n2)/2;
    }

};

int main()
{
    int x,y,choice,out;
    cal obj1;

    cout << "\n1.add\n2.sub\n3.mul\n4.div\n5.fact\n6.avg\nEnter choice: ";
    cin >> choice;
    cout<< "Enter two number: ";
    cin >>x >> y;

    obj1.setInput(x,y);

    switch(choice)
    {
    case 1:
        out=obj1.add();
        cout<<"answer is: "<<out;
        break;

    case 2:
        out=obj1.sub();
        cout<<"answer is: "<<out;
        break;

    case 3:
        out=obj1.mul();
        cout<<"answer is: "<<out;
        break;

    case 4:
        out=obj1.div();
        cout<<"answer is: "<<out;
        break;

    case 5:
        out=obj1.fact();
        cout<<"answer is: "<<out;
        break;

    case 6:
        out=obj1.avg();
        cout<<"answer is: "<<out;
        break;
    }

    return 0;
}

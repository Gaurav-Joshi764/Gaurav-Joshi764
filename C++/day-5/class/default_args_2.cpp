//Default arguments

#include <iostream>

using namespace std;

int volume(int l=5,int w=6, int h=7)
{
    return l*w*h;
}
int main()
{
    cout<<"volume="<<volume()<<endl;
    cout<<"volume="<<volume(9)<<endl;
    cout<<"volume="<<volume(15,2)<<endl;
    cout<<"volume="<<volume(3,4,7)<<endl;

    return 0;
}

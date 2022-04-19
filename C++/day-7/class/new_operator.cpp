//cpp code to demo the new operator:

#include<iostream>

using namespace std;

int main()
{

    int *pt = new int;

    *pt = 55;

    cout <<"value:" << *pt << endl;
    cout << "address of int variable:" << pt << endl;
    cout << "size of int variable:" << sizeof(*pt) << endl;
    cout << "Size of int pointer:" << sizeof(pt) << endl;
    cout << "Address of int pointer:" <<&pt << endl;

    return 0;

}

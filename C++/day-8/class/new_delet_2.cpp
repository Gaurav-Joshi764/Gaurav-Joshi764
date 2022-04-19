#include<iostream>

using namespace std;

class A

{
    public :
        int i, j, k, l, m;

    A()
    {
        cout<<"inside the const" << endl;
        i = 0;
        j = 10;
    }

    ~A()
    {
        cout<<"inside the des" << endl;
    }

};

int main ()

{
    // declaration of variables
    int *ptr1, *ptr2, sum;
    A *a2, *a3;

    ptr1 = new int;

    a2= new A [5];
    a3= new A;
    a3 = NULL;

    // cout << "sizeof (a1): "<< sizeof(al) << "sizeof(a2): " << sizeof(a2) << endl;

    cout << "sizeof (sum): " << sizeof(sum) << "sizeof(ptr1): " << sizeof(ptr1)<< endl;

    //delete pointer variables
    //delete ptr1;
    free(ptr1);

    delete [] a2;

    delete a3;

    //char *c = (char *) malloc(sizeof(char)*5);
    // delete c;

    A *c = (A *) malloc(sizeof(A)*5);
    free(c);


    return 0;

}

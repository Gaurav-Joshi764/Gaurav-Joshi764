#include<iostream>
using namespace std;

namespace NS1
{
    int i;
    namespace NS2
    {
        //a nested namespace
        int j;
    }//end namespace NS2
}//end namespace NS1

int main()
{
    NS1::i = 19;
    //NS2::j = 10; //error,NS2 is not in view
    NS1::NS2::j = 10;   //this is right
    cout<<NS1::i<<" "<<NS1::NS2::j<<"\n";
    //use NS1

    using namespace NS1;
    //now that NS1 is in view,NS2 can be used to refer to j.
    cout<<i*NS2::j;

    return 0;
}
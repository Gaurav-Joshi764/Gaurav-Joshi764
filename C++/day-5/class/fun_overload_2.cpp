#include<iostream>

using namespace std;

int sum(int i)
{
    return i;

}

/*int sum(int i, int i)
{
    return i+j;

}*/


int sum(float i,float j)
{
    return i+j;

}


float sum(float i,float j,float k)
{
    return i+j+k;

}


int sum(int i,int j,int k)
{
    return i+j+k;

}

char sum(char i,char j,char k)
{
    return i+j+k;
}

int main()
{

    cout<<"sun is" <<sum(4)<<endl;
    cout<<"sun is" <<sum(4,5)<<endl;
    cout<<"sun is" <<sum(4.5f,6.5f)<<endl;
    cout<<"sun is"<<sum(4.6f,6.5f,7.6f)<<endl;
    cout<<"sun is" <<sum('I'+'J'+'K')<<endl;


    return 0;
}

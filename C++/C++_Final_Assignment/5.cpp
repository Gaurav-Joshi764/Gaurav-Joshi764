#include <iostream>
using namespace std;

int res;
int fact(int n);
int ncr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int fact(int m)
{
    int t = 1;
    for (int i = 2; i <= m; i++)
    {
        t = t * i;
    }
    return res;
}

int main()
{
    int white_ball, red_ball, bag;
    cout<<"No. of white ball: "<<endl;
    cin>>white_ball;

    cout<<"No. of red ball: "<<endl;
    cin>>red_ball;

    cout<<"No. of bag: "<<endl;

    cin>>bag; 
    
    int h=ncr(bag, white_ball);

    int c = white_ball + red_ball/2;
    int count = 0;

    while(!(bag > c))
    {
        int answer = h/white_ball;
        count = answer;
        break;
    }
    cout<<count<<endl;
}


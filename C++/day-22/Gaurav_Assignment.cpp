#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main()
{

    vector<int> arr;
    int number;
    int t;

    cout<<"number of elements:\n";
    cin>>number;

    for(int i=0;i<number;i++)
    {
        cout<<"enter no elements "<<i<<":";
        cin>>t;
        arr.push_back(t);
    }
    int k;

    cout<<"number of subset elements:\n";
    cin>>k;

    deque<int> Qi(k);
    int i;
    for (i = 0; i < k; ++i)4

    {
        while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();

        Qi.push_back(i);
    }

    for ( ; i < arr.size(); ++i)
    {
        cout << arr[Qi.front()] << " ";
        while ( (!Qi.empty()) && Qi.front() <= i - k)
            Qi.pop_front();

        while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();
        Qi.push_back(i);
    }
    cout << arr[Qi.front()] << endl;
}


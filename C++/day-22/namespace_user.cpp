#include<iostream>
using namespace std;

namespace CounterNameSpace
{
    int upperbound;
    int lowerbound;

    class counter
    {
    private:
        int count;
    public:
        counter(int n)
        {
            if(n<=upperbound)
                count = n;
            else
                count = upperbound;
        }//end counter

        void reset(int n)
        {
            if(n<=upperbound)
                count = n;
        }//end reset

        int run()
        {
            if(count>lowerbound)
                return count--;
            else
                return lowerbound;
        }//end run
    };//end of class
}//end of namespace

int main()
{
    CounterNameSpace :: upperbound = 100;
    CounterNameSpace :: lowerbound = 0;
    CounterNameSpace :: counter obj1(10);

    int i;

    do
    {
        i=obj1.run();//once object created we don't need
        cout<<i<<" ";
    } while (i>CounterNameSpace :: lowerbound);

    cout<<endl;

    CounterNameSpace :: counter obj2(20);

    do
    {
        i=obj2.run();
        cout<<i<<" ";
    } while (i> CounterNameSpace :: lowerbound);

    cout<<endl;

    
    obj2.reset(100);

    CounterNameSpace :: lowerbound = 90;

    do
    {
        i=obj2.run();
        cout<<i<<" ";
    } while (i>CounterNameSpace :: lowerbound);
    
    
    return 0;
    
}
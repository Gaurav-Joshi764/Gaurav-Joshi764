#include<iostream>

using namespace std;

class measure
{
public:
    int a,height,length,width;

    void setInput(int h,int l,int w)
    {
        height=h;
        length=l;
        width=w;
    }

    int area();

    int volume()
    {
        return length*width*height;
    }

    int add(measure,measure);
};

int measure :: area()
{
    int a;
    a = 2*(length*width + width*height + length*height);
    return a;
}


int measure :: add(measure m1,measure m2)
{
    measure r;
    r.height = m1.height + m2.height;
    r.width = m1.width + m2.width;
    r.length = m1.length + m2.length;

    cout<<"total height: "<<r.height;
    cout<<"total width: "<<r.width;
    cout<<"total length: "<<r.length;
}

int main()
{
    int h1,w1,l1,h2,w2,l2;

    measure obj1;
    measure obj2;
    measure r;

    cout<<"Enter height,width,length for object 1 : ";
    cin>>h1>>w1>>l1;

    obj1.setInput(h1,w1,l1);

    cout<<"Enter height,width,length for object 2 : ";
    cin>>h2>>w2>>l2;

    obj2.setInput(h2,w2,l2);

    cout<<endl<<"Area and volume for object 1: "<<obj1.area()<<" "<< obj1.volume();
    cout<<endl<<"Area and volume for object 2: "<<obj2.area()<<" "<< obj2.volume();

    r.add(obj1,obj2);

  return 0;

}

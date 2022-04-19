#include<iostream>
#include<fstream>

using namespace std;

class student
{
    public:
        int roll;
        char name[25];
        float marks;

        void getdata()
        {
            cout<<"enter roll no and name"<<endl;
            cin>>roll>>name;
            cout<<"marks"<<endl;
            cin>>marks;
        }

        void addRecord()
        {
            fstream f;
            student stu;
            f.open("student.dat",ios::app|ios::binary);
            stu.getdata();
            f.write((char*)&stu, sizeof(stu));
            f.close();
        }

        void disPlay()
        {
            fstream f;
            student s;
            f.open("student.dat",ios::in|ios::binary);
            f.read((char*)&s,sizeof(s));
            cout<<"roll: "<<s.roll<<"\tname: "<<s.name<<"\tmarks: "<<s.marks<<endl;
            f.close();
        }
};//end of the class

int main()
{
    student s1;

    char ch='n';
    do{
        s1.addRecord();
        cout<<"want add more?(y/n)"<<endl;
        cin>>ch;

    }
    while (ch=='y'||ch=='y');

    cout<<"updated!!"<<endl;

    s1.disPlay();

}//end of main
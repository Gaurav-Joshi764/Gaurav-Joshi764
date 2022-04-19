#include<iostream>
#include<ctime>
using namespace std;

class Time
{
    private:

        int hr,min,sec;

    public:

        void settime()

        {
            time_t now = time(0);
            char* dt = ctime(&now);
            cout<<"Current time:"<<dt<<endl;
        }

        Time gettime()
        {
            Time a;

            cout<<endl<<"Enter hours,ninutes and seconds:";
            cin>>a.hr>>a.min>>a.sec;
            cout<<endl<<"Given tine:"<<a.hr<<":"<<a.min<<":"<<a.sec;
            return a;
        }



        Time sleeptime(Time t1,Time t2)
        {
            Time t;

            t.hr = t1.hr - t2.hr;
            t.min = t1.min - t2.min;
            t.sec = t1.sec - t2.sec;
            cout<<endl<<"Difference:"<<t.hr<<":"<<t.min<<":"<<t.sec<<endl;
            return t;
        }
};

class Date
{
    public:

    int day,month,year;

    Date setdate()
    {
        Date d;

        cout<<endl<<"Enter day,month and year:";
        cin>>d.day>>d.month>>d.year;
        cout<<endl<<"Given date:"<<d.day<<":"<<d.month<<":"<<d.year;
        return d;
    }

    Date getdate()
    {
        Date a;
        a.setdate();
        return a;
    }

    Date setDob()
    {
        Date Dob;
        cout<<endl<<"Enter your date of birth in day,month and year:";
        cin>>Dob.day>>Dob.month>>Dob.year;
        cout<<endl<<"Given DOB is:"<<Dob.day<<":"<<Dob.month<<":"<<Dob.year;
        return Dob;
    }

    Date findAge(Date d1, Date d2)
    {
        Date x;

        x.day = d1.day - d2.day;
        x.month = d1.month - d2.month;
        x.year = d1.year - d2.year;
        cout<<endl<<"age is :"<< x.day<<":"<<x.month<<":"<<x.year<<endl;
        return x;
    }
};



int main()
{
    Time time1,time2,r;

    time1=time1.gettime();
    time2=time2.gettime();

    r = r.sleeptime(time1, time2);

    Date cdate,dob,d;

    cdate=cdate.setdate();
    dob=dob.setDob();

    d = d.findAge(cdate, dob);

    return 0;
}

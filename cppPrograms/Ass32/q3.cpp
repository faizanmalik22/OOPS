//Define a class Date to represent date(like d=31, m=12, y=2022)Declare appropriate number of instance memeber variables and also define instance member functions to setdate and getdate.
#include<iostream>
using namespace std;

class Date
{
    int d,m,y;//by default private every member in class
    public:
    void setDate(int day,int mon,int year)
    {
        d=day;
        m=mon;
        y=year;
    }

    void getDate()//jo dodega uske pair dukhenge
    {
       cout<<"d="<<d<<", "<<"m="<<m<<", "<<"y="<<y<<endl;
    }

};

int main()
{
    Date obj;
    obj.setDate(31,12,2022);
    obj.getDate();
    return 0;
}
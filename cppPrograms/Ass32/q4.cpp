//q3.//Define a class Date to represent date(like d=31, m=12, y=2022)Declare appropriate number of instance memeber variables and also define instance member functions to setdate and getdate.
//in q3. define a methods to display date in the following pattern
//1. 31-12-2022
//2. 31-Dec-2022
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
    //1
    void getDate_Method1()//jo dodega uske pair dukhenge
    {
       cout<<d<<"-"<<m<<"-"<<y<<endl;
    }
  //2
   void getDate_Method2()//jo dodega uske pair dukhenge
    {
       // char month[]={'j','f','m'};
        //char month[]={"faizan love chicken"};

        //Doubt("_")
         char *months[]={"Jan",
                       "Fab",
                       "Mar",
                       "Apr",
                       "May",
                       "Jun",
                       "Jul",
                       "Aug",
                       "Sep",
                       "Oct",
                       "Nov",
                       "Dec"};

       cout<<d<<"-"<<months[m-1]<<"-"<<y<<endl;
    }
  
};

int main()
{
    Date obj;
    obj.setDate(31,12,2022);
    obj.getDate_Method2();
    return 0;
}
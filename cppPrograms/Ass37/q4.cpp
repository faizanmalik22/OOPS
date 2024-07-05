//Define a class Distance with instance variables, hr, min and sec. provide instance member methods
//setTime() and showTime(). setTime() methods has formal arguments with the same name as instance variables.
//Also define setters and getters
#include<iostream>
using namespace std;
class Time//Distance typing mistake
{
    private:
    int hr,min,sec;
    public:
    void setTime(int hr,int min,int sec)
    {
        this->hr=hr;
        this->min=min;
        this->sec=sec;
    }
    void showTime()
    {
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }

    //setter
    void setHour(int hr){this->hr=hr;}
    void setmin(int min)
    {
        this->min=min;
    }
    void setsec(int sec){ this->sec=sec; }

    //getter
    int gethour()
    {
        return hr;
    }

    int getmin()
    {
        return min;
    }

    int getsec()
    {
        return sec;
    }

};
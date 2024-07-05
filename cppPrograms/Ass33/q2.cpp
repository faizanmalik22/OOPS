/*
 Define a class Time to represent a time with instance variable h,m and s to store
 hour, minute and second. Also define following member functions 
 1.void setTime(int,int,int)
 2.void showTime()
 3.void normalize()
 4.Time add(Time)
 5.bool is_greater(Time)
*/
#include<iostream>
using namespace std;
class Time
{
   private:
   int h,m,s;
   public:
   //declare here member function
   void setTime(int,int,int);
   void showtime();
   void normalize();
   Time add(Time);
   bool is_greater(Time);
};

//define here member function(we know how to define member function outside class)
void Time::setTime(int x,int y,int z)
{
    h=x;
    m=y;
    s=z;
}

void Time::showtime()
{
    cout<<"hour="<<h<<", Minute="<<m<<", second="<<s<<endl;
}
 
 void Time::normalize()
 {
      m=m+s/60;
      s=s%60;//remainder
       h=h+m/60;
       m=m%60;//remainder    
 }

 Time Time::add(Time t)
 {
    Time temp;
    temp.h=h+t.h;
    temp.m=m+t.m;
    temp.s=s+t.s;
    return temp;

 }

 bool Time::is_greater(Time x)
 {
    if(h>x.h)
    return true;
    else if(h<x.h)
    return false;
    else if(m>x.m)
    return true;
    else if(m<x.m)
    return false;
    else if(s>x.s)
    return true;
    else 
    return false;
 }
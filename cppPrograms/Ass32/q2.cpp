//Define a class Time to represent Time(like 3hr 45min 20 sec). Declare appropriate number of instance member variable and also define instance member functions to set values for time and display values of time
#include<iostream>
using namespace std;
class Time
{
   private://by default all member private hote hai but me likh rha fir bhi private keyword
           int hr,min,sec;
   public:                         //instance member pblic function
         void setTime(int h,int m,int s)
         {
            hr=h;
            min=m;
            sec=s;
         }
         void displayTime()
         {
            cout<<hr<<" hr "<<min<<" min "<<sec<<" Sec"<<endl;
         }

};

int main()
{
    //now using class
    Time obj;
    obj.setTime(12,30,20);
    obj.displayTime();
}
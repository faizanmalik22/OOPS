//in q2. overload + operator to add two time object
#include<iostream>
using namespace std;
class Time 
{
    private:
    int hr,min,sec;
    public:
    Time(int H,int M,int S)
    {
        hr=H;
        min=M;
        sec=S;
    }
   //non-parameterized constructer
   Time()
   {}

    //so we declared > operator for Time object
    bool operator>(Time);

   //declare ++ preincremnt
   Time operator ++();//obj.sec++[obj.sec=int type value]

    //declare + to add two time object
    Time operator+(Time);

  void showdata()
  {
    cout<<"H:"<<hr<<":"<<min<<":"<<sec<<endl;
    } 

};
 
 //define > operator for Time object 
bool Time::operator>(Time t)
{
    if(hr>t.hr)
     return true;
     else if(hr<t.hr)
     return false;
     else if(min>t.min)
     return true;
     else if(min<t.min)
     return false;
     else if(sec>t.sec)
     return true;
     else
     return false;

}

// define ++ preincrement operator for time class
Time Time::operator++()
{
    ++sec;//increment second using preincremnt on int data type (built in type)  
}

//Define + operator
Time Time::operator+(Time t)
{
    Time temp;//yaha object ban rha hai non-para,eterized bna do iske liye
   temp.sec=sec+t.sec;//ho skta hai temp ka second 60 se zyada hoay
   
   temp.min=min+t.min+temp.sec/60;//sol
   temp.sec=temp.sec%60;//sec vlaue update when required

   temp.hr=hr+t.hr+temp.min/60;//if minute greater than 60
   temp.min=temp.min%60;
    return temp;
}
int main()
{
    Time t1(12,34,10),t2(11,12,11),t3;
    t3=t1+t2;
    t3.showdata();    
} 
/*
 Create a class Time which contain hr,min,sec as fields(property), 
 overload >(greater then )operator to complex two time object
*/
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

    Time(){}
  //now declare > operator two compare two Time type object
    // int x=5;int s=9; s>x; here both operands are int type 
    //but now if we perform action on two time object 
    //let Time t1,t2; t>t2; not works operand dont know by > 

    //so we declared > operator for Time object
    bool operator>(Time);
   

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


int main()
{
    Time t1(12,34,10),t2(11,12,11);
    bool x=t1>t2;
    cout<<x;
    

}
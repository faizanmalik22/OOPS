//in q2. overload pre-increment and postincrement operator to increment Time object value by one secon
#include<iostream>
using namespace std;
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
    //non parametr constructer
  Time(){}
    //declared > operator for Time object
    bool operator>(Time);

     // declare preincrement and psotincrement operator to increse sec by 1
    //VIP("_")
    //remember likhne ka trika c langiauge ki trah hi rhega  uniary operator ke liye
    //ex: pre increment: ++t1
    //ex: post increment: t1++ 
    //declare pre-increment(with out argument by default bhi pre hi mana jata hai)
    Time operator ++();//without argument thy is by default pre increment version mana jata hai [obj.sec++[obj.sec=int type value]

    //post increment ese nhi hoga same q ki Siganture same Error
    // so make it different for compilers knows
    //Post incremnt//hack ye hai argument me int pass krdo
     Time operator++(int);

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
    sec++;//increment second using preincremnt on int data type (built in type)
      min= min+(sec/60);
       sec=sec%60;  
       hr=hr+min/60;
       min=min%60;
       //VIP remember how to return current object
       return *this;//object pointer hold current object address so *(addres)=pointed object
}

//Post inrement  (VIP)
 Time Time::operator++(int x)
 {
    //make a temp object to store current object value before changes
     Time temp;
     temp=*this;//here old value store in temp;
      sec++;
       min= min+(sec/60);
       sec=sec%60;  
       hr=hr+min/60;
       min=min%60;

       //changes hojay but return old value hi kraynge
       return temp;
 }
int main()
{
    Time t1(12,34,10),t2(11,12,11);
    // bool x=t1>t2;
    //cout<<x;
    t1.showdata();
   t1=++t1;//t1.operator++();
    t1.showdata();
    t1=t1++;//post increment
    t1.showdata();

    
}
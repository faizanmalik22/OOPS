//in q2. over load operator = to perform copy of time object
/*
  testcase:("_")
  ex: 
  int x=5,y;
  y=x;//y me x ka data copy hogya

  now:
  Time t1,t2
  if we write
  t1=t2; Error bcz operand does not match = defination 
  isiliye overloading karni padegi
*/

#include<iostream>
using namespace std;
class Time
{
   private:
   int hr,min,sec;
   public:
   void showdata()
   {
    cout<<hr<<":"<<min<<":"<<sec<<endl;
   }
   //overload >> operator
   friend istream& operator>>(istream&,Time&);//declare
   
   //declare << operator
   friend ostream& operator<<(ostream&,Time);//here we just print the value of time object so we just need bject not its refrence
    
    //declare = operator
    void operator=(Time);
};

//define <<
ostream& operator<<(ostream&dout,Time T)//you can choose anu name you want dout or cout or anything it just reference variable name
{
    dout<<T.hr<<":"<<T.min<<":"<<T.sec<<endl;//now we dont need showdata
}
//define >>
  istream& operator>>(istream&din,Time&x)
    {
        din>>x.hr>>x.min>>x.sec;//referene variable act as original variable//din=cin
        return din;//yaha din ka refernece pass ho rha hai
    }

//define =
void Time::operator=(Time t)
{
    hr=t.hr;
    min=t.min;
    sec=t.sec;
// remember u can directly access member of caller object so this copy into caller object
}
 
int main()
{
    Time t1,t2,t3;
     cout<<"enter time ";
     cin>>t1;
     cout<<t1;
     //
     t3=t1;
     cout<<"data successfully copied\n";
       cout<<t3;//t3.showdata(); no need now this function bcz we overloaded <<


}
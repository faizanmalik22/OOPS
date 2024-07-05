/*
define a class Time with appropriate instance variable and member function
overload following operators
1. << (insertion opearator)
2. >>(extraction operator)
*/
//cin>>x>>y;//int type no error
//cin>>t1<t2;//Time typr error
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
   
   //overload << operator
   friend ostream& operator<<(ostream&,Time);//here we just print the value of time object so we just need bject not its refrence
    /*
    //define >> not recommanded but working
    //agar friend function ko class ke andar define krna hai to tb friend keyword lagana padega
    //  friend istream& operator>>(istream&din,Time&x)
    // {
    //     din>>x.hr>>x.min>>x.sec;//referene variable act as original variable//din=cin
    //     return din;//yaha din ka refernece pass ho rha hai
    // }
    */
   
};

//define <<
ostream& operator<<(ostream&dout,Time T)//you can choose anu name you want dout or cout or anything it just reference variable name
{
    dout<<T.hr<<":"<<T.min<<":"<<T.sec<<endl;//now we dont need showdata
}

//define<<
  istream& operator>>(istream&din,Time&x)
    {
        din>>x.hr>>x.min>>x.sec;//referene variable act as original variable//din=cin
        return din;//yaha din ka refernece pass ho rha hai
    }
int main()
{
    Time t1,t2,t3;
    cout<<"enter time ";
    cin>>t1;//here cin>> works on time operand bcz of overload version

    //before << overloaded  ERORR
    //cout<<t1;//bcz its does not work on time operand {int x;cout<<x no ERROR}
       //t1.showdata();

    //After << overloading 
     cout<<t1; //NO ERROR
      //t1.showdata(); no need now
}
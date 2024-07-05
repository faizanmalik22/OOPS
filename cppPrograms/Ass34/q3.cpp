//define a class time with hr,min,sec as instance member variables,Define constructer to initialise time object.
#include<iostream>
using namespace std;
class Time
{
   //by default privte hi hote hai
   int hr,min,sec;
   public:
   Time(int H,int M,int S):hr(H),min(M),sec(S)//hehe mene initializer use krliya
   {

   }
   void displayTime()
   {
      cout<<hr<<":"<<min<<":"<<sec<<endl;
   }
};

int main()
{
   Time obj(2,48,50);
   obj.displayTime();


}
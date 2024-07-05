#include<iostream>
using namespace std;
void f1();
int main()
{
    f1();
    f1();
    f1();
}
void f1()
{
   int x=5;
   static int y;
   x++;
   y++;
   cout<<"x="<<x<<" y="<<y<<"\n";  
   
}
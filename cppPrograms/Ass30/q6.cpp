//define a function to swap data of two int variable using call by reference
#include<iostream>
using namespace std;
void swap(int &x,int &y)//reference pass hoga(means ordinary variable)
{
   x=x+y;
   y=x-y;
   x=x-y;   
}
int main()
{
    int a=10,b=20;
    swap(a,b);
    cout<<"after swap"<<endl;
    cout<<"a="<<a<<" "<<"b="<<b;
}
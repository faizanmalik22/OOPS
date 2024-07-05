//WAF using function overloading to find a maximum of two numbers and both numbers can be integer or real
#include<iostream>
using namespace std;
float maximum_num(float a, float b)
{
   return (a>b?a:b);
}
int  maximum_num(int a,int b)
{
   return (a>b?a:b);
}
int main()
{
    cout<<maximum_num(4,5)<<endl;
    cout<<maximum_num(5.5f,4.6f)<<endl;

}
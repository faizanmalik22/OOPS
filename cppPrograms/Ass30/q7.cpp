//WAF using the default argument that is able to add 2 or 3 numbers
#include<iostream>
using namespace std;
int add(int,int,int=0);//provide default argument during declaration
int main()
{
   cout<<"Sum="<<add(9,5)<<endl;//function call with only 2 argument third by default contain default value
   cout<<"Sum="<<add(10,20,30);

}
int add(int x,int y,int z)
{
    return x+y+z;
}
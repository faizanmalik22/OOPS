#include<iostream>
using namespace std;
int add(int x,int y,int z=9);
int main()
{
    cout<<"sum is"<<add(5,4,6);
    cout<<endl<<"sum is"<<add(3,4);
}
int add(int x,int y,int z)
{
    return x+y+z;
}
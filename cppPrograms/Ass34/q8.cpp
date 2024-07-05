/*
  define a class Date with d,m,y as instance variables. initialise member 
  using initialiser
*/
#include<iostream>
using namespace std;
class Date
{
    private:
    int D,M,Y;
    public:
    Date(int d,int m,int y):D(d),M(m),Y(y)//remember not semicolan
    {

    }
  //by default inline function all member function
    void display()
    {
        cout<<D<<"/"<<M<<"/"<<Y<<endl;
    }
};

int main()
{
    Date d1(23,9,2022);
    d1.display();
}
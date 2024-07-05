//Define a class Complex to represent a complex number. Declare variable to store real and imaginary part of a complex number. also define instance member functions to set values of complex number and print values of complex number
#include<iostream>
using namespace std;
class Complex
{
  private:
  int real,img;
  public:
  void setdata(int x,int y)
  {
    real=x;
    img=y;
  }
  void displaydata()
  {
    cout<<real<<"+"<<img<<"i";
  }
  
};

int main()
{
     //here we use class complex (class=data type)
     Complex obj;
     obj.setdata(3,4);
     obj.displaydata();
     return 0;

}
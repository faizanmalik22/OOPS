/*Define a class Complex with instance variable a and b to store real and imaginary
  part of a complex number. provide setData() method with formal argument with tha name
  a and b, to set the value of instance variables, 
  Also define showData() methods to display instance variable values

  //conclusion: this ("_")
  */
#include<iostream>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
    void setData(int a,int b)
    {
        this->a=a;
        this->b=b;
    }

    void showdata()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
};
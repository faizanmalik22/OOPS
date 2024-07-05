/*
  Define a class Complex to represent a complex number with instance variables a and b to store real and imaginary parts.
  Also define following member functions
  1.void setData(int,int)
  2.void showdata()
  3.Complex add(Comlex)
  4.Complex subtract(Complex)
  5.Comlex multiply(Complex)

*/
#include<iostream>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
    void setData(int,int);
    void showData();
    Complex add(Complex);
    Complex subtract(Complex);
    Complex multiply(Complex);

};
//define member function outside class
void Complex::setData(int x,int y)
{
    a=x;
    b=y;
}

void Complex::showData()
{
    cout<<"a="<<a<<" b="<<b<<endl;
}

//addition b/w 2 Complex num
Complex Complex::add(Complex M)
{
    Complex temp;
    temp.a=a+M.a;
    temp.b=b+M.b;
    return temp;
}

//subtraction b/w 2 Complex num
Complex Complex::subtract(Complex N)
{
    Complex temp;
    temp.a=a-N.a;
    temp.b=b-N.b;
    return temp;
}

//Multiplication b/w 2 Complex num (search how to multiply two complex number)
Complex Complex::multiply(Complex N)
{
    Complex temp;
    temp.a=a*N.a-b*N.b;//("_")same-same
    temp.b=a*N.b+b*N.a;//("_")differnt+different
    return temp;
}

int main()
{
    Complex c1,c2,c3;
    c1.setData(5,7);
    c2.setData(9,7);
    c3=c1.add(c2);
   // cout<<"Addition"<<endl;
    c3.showData();

    c3=c1.subtract(c2);
    // cout<<"subtraction"<<endl;
    c3.showData();

    c3=c1.multiply(c2);
    // cout<<"mulriplication"<<endl;
    c3.showData();
}

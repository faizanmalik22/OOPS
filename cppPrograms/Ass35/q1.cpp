/*Define a class Complex with appropriate instance variables and member functions Define following opeartors in the class
 1. +
 2. -
 3. *
 4. ==
*/
#include<iostream>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }

 Complex operator+(Complex x)
{
    //tip: you showld know how addition of complex number("_")
    Complex temp;
    temp.a=a+x.a;
    temp.b=b+x.b;
    return temp;
}


};

int main()
{
    Complex c1,c2,c3;
    c1.setdata(5,3);
    c2.setdata(3,4);
    
    //+
    c3=c1+c2;
    cout<<"addition=";
    c3.showdata();
    cout<<endl;
}
//define + operator member of complex class

//define - operator instance member of complex

Complex Complex::operator-(Complex x)
{
    //you should know how complex num subtract
    Complex temp;
    temp.a=a-x.a;// direct a & b is caller object
    temp.b=b-x.b;
    return temp;
}

//define * operator 
Complex Complex::operator*(Complex C)
{
    //you should know how two complex number multiply
    /*
       Compute (7 + 2i)(4 – 6i)
      Using the formula (a + ib)(c + id) = (ac – bd) + i(ad + bc),

     a = 7, b = 2, c = 4, d = -6

    (7 + 2i)(4 – 6i) = (7)(4) – (2)(-6) + i[(7)(-6) + (2)(4)]

    = 28 + 12 + i(-42 + 8)

    = 40 – 34i
     */
    Complex temp;
    temp.a=a*C.a -b*C.b;//(ac – bd) c=x.a, d=x.b
    temp.b=a*C.b+b*C.a; //(ad + bc)
    return temp;
}

//define operator == for complex num
//Two complex numbers are equal if their real parts are the same and their imaginary parts are the same.
bool Complex::operator ==(Complex C)
{
    if(a==C.a&&b==C.b)//compare real with real and img with img
    return true;
    else
    return false;
}

int main()
{
    Complex c1,c2,c3;
    c1.setdata(5,3);
    c2.setdata(3,4);
    
    //+
    c3=c1+c2;
    cout<<"addition=";
    c3.showdata();
    cout<<endl;
    
    //-
    c3=c1-c2;
    cout<<"subtraction=";
    c3.showdata();
    cout<<endl;

    //*
     c3=c1*c2;
     cout<<"Multiplication=";
     c3.showdata();
     cout<<endl;

     //==
     bool x=c1==c2;
     cout<<x;
}
/* 
  define a class Complex and overload following Operators as a friend.
    1. +
    2. -
    3. *
*/

#include<iostream>
using namespace std;
class Complex
{
   private:
   int real,img;
   public:
   //parameterized constrcuter
    Complex(int x,int y)
    {
        real=x;
        img=y;
    }
    //non-parameterized constructer
    Complex(){}

    void showdata()
    {
        cout<<real<<" "<<img<<"i"<<endl;
    }

    //overload + operatoar as friend
    //declaration with friend keyword
    friend Complex operator+(Complex,Complex);//here for binary operator 2 operand required bcz there is no caller object to calling friend operator(funtion)
   
   //overload - operatoar as friend
    //declaration with friend keyword
    friend Complex operator-(Complex,Complex);

      //overload * operatoar as friend
    //declaration with friend keyword
    friend Complex operator *(Complex, Complex);


};

//defination of + friend opeartor
 Complex operator+(Complex x,Complex y)//there is no friend keyword for defination (there is no memeber ship label bcz it is just frind of complex class not member)
  {
    Complex temp;
    temp.real=x.real+y.real;
    temp.img=x.img+y.img;
    return temp;
  }

  //defination of - friend operator
   Complex operator-(Complex x,Complex y)
   {
    Complex temp;
    temp.real=x.real-y.real;
    temp.img=x.img-y.img;
    return temp;
   }

//defination of * operator
 Complex operator*(Complex x,Complex y)
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
    //real a img=b, for 2nd num: c=real d=img
    Complex temp;
    temp.real=x.real*y.real-x.img*y.img;//(ac – bd)
    temp.img=x.real*y.img+x.img*y.real;// i(ad + bc),
    return temp;
 }
int main()
{
    Complex c1(7,+2),c2(4,-6),c3;
    c1.showdata();
    c2.showdata();
    c3=c1+c2;//c3=operator+(c1,c2);{oprator+=function name} //there is no caller object of that class which he is friend so thats why we need two operand as argument
    c3.showdata();
    //- operaot
    cout<<"\n";
    c3=c1-c2;
    c3.showdata();

    //operator *
    cout<<"\n";
    c3=c1*c2;
    c3.showdata();
}
//Alhamdulillah

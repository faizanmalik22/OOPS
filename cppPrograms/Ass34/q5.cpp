/*Define a class complex with instance variables for real and imaginary part of a 
  complex number. Define only one parameterised constructer in the class to intialize complex
  object. Also define showdata() method in the class to display object data. now create an array of 
  complex class with size 5 and display value of each object
*/
#include<iostream>
using namespace std;
class Complex
{
    private:
    int real,img;
    public:
    Complex(int r,int im)//constrcuter public isiliye taki class ke bahr object create ho ske
    {
        real=r;
        img=im;
    }
    void showdata()
    {
        cout<<"real="<<real<<" img="<<img<<endl;
    }

    Complex(){}

    void setdata(int x,int y)
    {
        real=x;
        img=y;
    }
};

int main()
{
    //how complex array inialize with constrcuter?
  //  Complex arr[5];
  
  //sol
  //doumentation:https://www.javatpoint.com/initialise-an-array-of-objects-with-parameterised-constructors-in-cpp
  Complex arr[]={ Complex(5,4),Complex(3,5),Complex(10,12),Complex(11,11),Complex(1,2)};
    for (int i = 0; i <5; i++)
    {
         arr[i].showdata();
    }
}
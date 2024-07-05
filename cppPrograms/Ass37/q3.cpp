//in q2. write a non member function in which instantiate. Complex class dynamically.
//initialise instance variables and display their values
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

//non-member function
void dyn_object()
{
    //Complex class ka object bana hai dynamically
    Complex *p;
    p=new Complex;//dynamically complex type ka block bn gya

   //pointer to member -> ("_")
   p->setData(10,15);
   p->showdata();
}
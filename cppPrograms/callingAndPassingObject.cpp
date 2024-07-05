#include<iostream>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
    //declare member function inside class body
    //constrcutor
    Complex()
    {
        cout<<"hello";
    }
    void set_a(int);
    void set_b(int);
    void show_a();
     void show_b();
     Complex add(Complex);//declare

};
//define member function outside class body
void Complex::set_a(int x)
{
    a=x;
}

void Complex::set_b(int y)
{
    b=y;
}
void Complex::show_a()
{
    cout<<a<<endl;
}
void Complex::show_b()
{
    cout<<b<<endl;
}


Complex Complex::add(Complex c2 )
{
    Complex c3;
    c3.a=a+c2.a;//here + operator operand is integer! No Error
    c3.b=b+c2.b;//here + operator operand is integer
    return c3;
}
int main()
{
    Complex a,b,c;
    a.set_a(10);
    a.set_b(20);
    b.set_a(12);
    b.set_b(4);
   // c3=c1+c2;//+ operator does not perform operation on complex data type it should be int float..
   c=a.add(b);//object.indtance memberfunction (jo wo return krega wo c=return value Like:{int x=6})
   c.show_a();
   c.show_b();


}
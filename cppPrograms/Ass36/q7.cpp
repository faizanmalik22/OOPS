/*
Define a class Integer with instance variable of type int. 
provide a friend logical operator Not ! Also Define a friend operator == 
to compare two integer vale
*/
#include<iostream>
using namespace std;
class Integer
{
    private:
    int num;
    public:
    //parametrized constructer
    Integer(int num):num(num)//parametrized constructer [initilaize member using initialize list]
    {}

    //non- parameterized
    Integer()
    {}

    void showdata()
    {
        cout<<num<<"\n";
    }

    // ! operator[!True=false, !false=True] ,remember every non zero value is true
    //The “not” logical operator is used to convert a value from true to false, or from false to true.
    friend int operator !(Integer); 
   
   //define == operator for comparision
   friend int operator==(Integer,Integer);

};
//define ! operator [for operand type Integer]
int operator !(Integer i)
{
    if(i.num)
    return 0;
    else
    return 1;
}

//define =={for operand of type Integer(class)}
int operator==(Integer i1,Integer i2)
{
    if(i1.num!=i2.num)
    return 0;
    else
    return 1;
}


int main()
{
    int i;
   Integer a1(0),a2(10),a3;
   i=!a1;//operator!(a1);
   cout<<i<<endl;

   //comparision
   cout<<"comparision: ";
   i=a1==a2;//operator==(a,a2);
   cout<<i<<endl;
   
}
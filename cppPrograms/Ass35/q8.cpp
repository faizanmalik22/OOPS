/*
   //consider a class Distance
   class Distance
   {
    int km,m,cm;
    public:
    //methods
   }
   //overload two time object
*/

#include<iostream>
using namespace std;
class Distance
{
    int km,m,cm;
    public:
    //methods
    Distance(int k,int m,int c)
    {
        km=k;
        this->m=m;
        cm=c;
    }
    //default constrcuter 
    Distance(){}
    void showdata()
    {
        cout<<"km:"<<km<<" meter="<<m<<" cm="<<cm<<endl;
    }
    //overload + operator
    Distance operator+(Distance);//declare + operator(function)
};

//define +
Distance Distance::operator+(Distance d)
{
    //generilize bnana hai
    Distance temp;//need default constructer explicitly
    temp.cm=cm+d.cm;
    temp.m=m+d.m+ temp.cm/100;
    temp.cm%=100;
    temp.km=km+d.km+temp.m/1000;//1000 meter se zyada hone pr  wo km me covert hojayga
    temp.m%=1000;//temp.m=temp.m%1000
    return temp;
}
int main()
{
    Distance d1(10,2000,205),d2(12,10,5),d3;
    d1.showdata();
    d2.showdata();
    //
    d3=d1+d2;
    d3.showdata();
}
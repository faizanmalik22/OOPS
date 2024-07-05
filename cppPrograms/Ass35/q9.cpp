//in q8. define pre and post decrement opearator to decrease distance by 1 cm
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

    //pre decremnet
    Distance operator--();

    //post decrement
     Distance operator--(int);//int is just for compiler to tell this is post increment

};

//define +
Distance Distance::operator+(Distance d)
{
    //not organize if ask in question then do like 1000m=1km ,1000cm=1m
    
    // Distance temp;//need default constructer explicitly
    // temp.km=km+d.km;
    // temp.m=m+d.m;
    // temp.cm=cm+d.cm;
    // return temp;

    
    //generilize bnana hai
    Distance temp;//need default constructer explicitly
    temp.cm=cm+d.cm;
    temp.m=m+d.m+ temp.cm/100;
    temp.cm%=100;
    temp.km=km+d.km+temp.m/1000;//1000 meter se zyada hone pr  wo km me covert hojayga
    temp.m%=1000;//temp.m=temp.m%1000
    return temp;
}

//define -- uniary operator pre -decrement
Distance Distance::operator--()
{   Distance temp;//need default constructer explicitly
   if(cm>0)
     cm--;
     else
     {
        cm=99;//meter se bollrow lekr -- krdiya 1 cm
        if(m>0)
          m--;//1 m decrese bcz we gave to cm
        else
        {
            m=999;
            km--;
        }
     }
      return *this;
}

//define post increment
Distance Distance::operator--(int x)
{     Distance temp=*this; //store old values in temp
   if(cm>0)
     cm--;
     else
     {
        cm=99;//meter se bollrow lekr -- krdiya 1 cm
        if(m>0)
          m--;//1 m decrese bcz we gave to cm
        else
        {
            m=999;
            km--;
        }
     }
    return temp;//return old values
}
int main()
{
    Distance d1(10,30,50),d2(12,10,5),d3;
    d3=d1+d2;
    d3.showdata();
    d3=--d3;//d3.operator--();
    d3.showdata();
}

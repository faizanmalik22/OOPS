//in question 3&4, derive a class StraightLine From Shape with two Coardinate type object
//instance members. provide methods to setLine(), getDistance() and showLine()
#include<iostream>
using namespace std;
#include<math.h>
class Coardiante
{
    private:
    int x,y;
    public:
    float getDistance()
    {
       
        return sqrt(x*x+y*y);
       
    }
    //overloaded
    float getDistance(Coardiante temp)//overloaded functions: same name with different argument within same scope
    {
        
        return sqrt((temp.x-x)*(temp.x-x)+(temp.y-y)*(temp.y-y));

    }

    void setCoardinate(int x,int y)
    {
        this->x=x;
        this->y=y;
    }

    //show coardinate
    void showCoardinate()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;//(7,8)
    }
};

//q4
class Shape
{
    private:
    string shapeName;
    public:
    void setShape(string shape)
     {
        shapeName=shape;
     }

     string getShape()
     {
        return shapeName;
     }

};

class StraightLine:public Shape
{
   private:
   Coardiante p1,p2;//int x type we just use coardinate class as data type
   public:
   void setLine(Coardiante x,Coardiante y)// point1________point2 (just rquired two pint to represent a line)
   {
      p1=x;
      p2=y;
   }

   //
   float getDistance()//caller object contain p1&p2 so,callerobject.getdistance()
   {
       return p1.getDistance(p2);//jo ye function return krkr dega wo fir return kr denge
   }

   //showline
   void showLine()// coardinate vaues
   {
      //display both point
        p1.showCoardinate();
        p2.showCoardinate();
   }

};

int main()
{
    Coardiante x1,x2;
    x1.setCoardinate(3,4);
    x2.setCoardinate(5,7);
    x1.showCoardinate();
    x2.showCoardinate();
    cout<<endl;
    StraightLine l1,l2;
    l1.setLine(x1,x2);
    cout<<l1.getDistance();
    cout<<endl;
    l1.showLine();
}


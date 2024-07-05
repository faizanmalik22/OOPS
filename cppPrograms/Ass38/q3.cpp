/*Define  a class Coardinte with x and y as instance variables. Define overloaded version of getDistance(),
 first with no argument calculating distance from origin, and second with one Argument of Coardinate type to calculate
 distance between two coardnate. Also define other methods if required.

*/
#include<iostream>
#include<math.h>
using namespace std;
class Coardiante
{
    private:
    int x,y;
    public:
    float getDistance()
    {
        /*
          The formula to calculate the distance (D) between a point with coordinates (x, y) and the origin (0, 0) is:
            D = √(x^2 + y^2)
        */
       //chatgpt https://chat.openai.com/share/27d54a36-2ea2-4f9b-8cf9-7e410271ad04
        return sqrt(x*x+y*y);
        //here only single point distance from orogin
    }
    //overloaded
    float getDistance(Coardiante temp)//overloaded functions: same name with different argument within same scope
    {
        //distance b/w two coardinate("_")
       // distance two point from origin
       //formula: Distance = √((x2 - x1)^2 + (y2 - y1)^2)
/*
        Where:
        (x1, y1) are the coordinates of the first point.
        (x2, y2) are the coordinates of the second point.
        */
          // x=25, sqrt(x)=5
        return sqrt((temp.x-x)*(temp.x-x)+(temp.y-y)*(temp.y-y));

    }

    //
    void setCoardinate(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
};

int main()
{
   Coardiante p1,p2;
   p1.setCoardinate(3,4);
  cout<< p1.getDistance()<<endl;
  //p1(2,3) p2(5,7)
  p2.setCoardinate(5,7);
  cout<<p1.getDistance(p2);
  return 0;

}
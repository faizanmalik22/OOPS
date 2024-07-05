/*Define a class circle with radius as private instance variable and setRadius(),
  getRadius(), getArea() as public instance method. Define  a class ThickCircle as
  a subclass of Circle with thickness as private instance variable and getThickness(),
  setThickness() as public instance methods. Provide and overridden method 
  getArea() to calculate area of thick portion of circle
*/
#include<iostream>
using namespace std;
class Circle
{
   private:
   double radius;
   public:
   void setRadius(double R)
   {
    radius=R;
   }
   double getRadius()
   {
     return radius;
   }
   double getArea()
   {
    return 3.14*radius*radius;
   }

};

class ThickCircle:public Circle
{
    private:
    double thickness;
    public:
    void setThickness(double T)
    {
        thickness=T;
    }
    double getThickness()
   {
     return thickness;
   }
   //overridden method getarea()
   double getArea()
   {
    //formula of area of thickportion
     return 3.14*((getRadius()+thickness)*(getRadius()+thickness)-getRadius()*getRadius()); 
   }

};
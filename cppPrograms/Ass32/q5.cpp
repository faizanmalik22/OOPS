//Define a class Circle with radius as its property. Provide SetRadius() and getRadius() methods. Also define methods to return area and circumference of circle
#include<iostream>
using namespace std;
class Circle
{
   private:
    double r;
   public:
   void setRadius(double x)
   {
     r=x;
   } 
   float getRadius()//REMEMBER getfunction always return value("_")
   {
    //cout<<r<<endl;
    return r;

   }

   double area_of_circle()
   {
      
      return (3.14*r*r); //kiski r (caller object ki)//jo dodega pair uske dukhenge
   }
    
    double circumference_of_circle()
    {
        return (2*3.14*r);
    }
};

int main()
{
    double A,C;
    Circle obj;
    obj.setRadius(10.5);
   A= obj.area_of_circle();
   C=obj.circumference_of_circle();
   cout<<"area="<<A<<", "<<"circumference="<<C<<endl;


}
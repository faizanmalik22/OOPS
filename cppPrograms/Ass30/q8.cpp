//Define a overloaded function to calculate area of circle, area of rectangle and area of triangle
#include<iostream>
using namespace std;
//area of circle
float area(float r)
{
    return 3.14*r*r;
}

float area(float l,float b)
{
    return l*b;
}
float area(float a,float b,float c)
{
    float s,A;
   if(a+b>c&&a+c>b&&b+c>a)
     {
        //valid
        s=(a+b+c)/2;
       A=sqrt (s*(s-a)*(s-b)*(s-c));
     }
     else
      exit(0);
}

//all of them have same name but different signature so this is function ovrloading
int main()
{
    
}
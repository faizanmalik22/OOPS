//Define a circle class with radius as instance variable. define two constructer in the class non-parameterised and parameterised
#include<iostream>
using namespace std;
class circle
{
    private:
    double radius;
    public:
    circle(double r)
    {
        radius=r;
    }

    circle(){}//non-parameterised constructer
};
//Define a class Shape with shapeName as instance variable. provide setter and getter
#include<iostream>
using namespace std;
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
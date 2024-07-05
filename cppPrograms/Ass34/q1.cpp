//Define a class cuboid with length,braedth and height as instance member variables. Define constructers to initialise member variable.
#include<iostream>
using namespace std;
class Cuboid
{ 
    private:
    int length,breadth,height;
    public:
    //constrcuter
    Cuboid(int x,int y,int z)
    {
        length=x;
        breadth=y;
        height=z;
    }
    void setdata(int a,int b,int c)
    {
        length=a;
        breadth=b;
        height=c;

    }

    void showdata()
    {
        cout<<"length="<<length<<" breadth="<<breadth<<" height="<<height<<endl;
    }
    
};

int main()
{
    //Cuboid obj;//error we know why("_")
    Cuboid obj(10,20,30);//constrcuter call and we pass value to the constrcuter
    obj.showdata();
}
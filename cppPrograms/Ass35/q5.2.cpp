/*
  Consider following class Numbers
  Class Numbers
  {
    private:
    int x,y,z;
    public:
    //methods
  };
Ovrload the uniary operator (-) to negate the number

*/
#include<iostream>
using namespace std;
class Numbers
  {
    private:
    int x,y,z;
    public:
    //methods
    //constructer
    Numbers(int x,int y,int z):x(x),y(y),z(z)//using concept of initializer(for revision("_"))
    {
    }
    //default-constructer
      Numbers()
      {}
    void showdata()
    {
        cout<<"x="<<x<<" y="<<y<<" z="<<z<<endl;
    }

    //decalre uniary - operator
    //way1. return nothing
    Numbers operator-();
    //way2 when return the object
    //Numbers operator-();
  };

//define - uiary operator (with no return)
  Numbers Numbers::operator-()
  {
    x=-x;
    y=-y;
    z=-z;
    return *this;//return current object
  }                                                //("_")
     // dono me se koi ek hi define ho payga q ki signature is same("_")
  //way2(retun object)
//   Numbers Numbers::operator-()
//   {
//       Numbers temp;
//       temp.x=-x;
//       temp.y=-y;
//       temp.z=-z;
//       return temp;
//   }
  int main()
  {
    Numbers n1(2,3,4),n2(9,4,5);//initialize object through parametrized constructer
    n1.showdata();
  //  n1=-n1;//n1.operator-();
    n1=-n1;
    n1.showdata();
  }
/*
  Create a Coardinate class  with 2 instance variable x and y. Overload Comma operator such that
  when u write c3=(c1,c2) then c2 is assigned to c3. where c1,c2 and c3 are objects of 3D Coardinate class

*/
#include<iostream>
using namespace std;
class Coardinate
{
    private:
    int x,y;
    public:
    void setdata(int x,int y)
    {
        this->x=x;//object pointer point two member of caller object
        this->y=y;
    }

    void showdata()
    {
        cout<<"x="<<x<<" y="<<y<<endl;
    }

    //declare comma , operater
    Coardinate operator ,(Coardinate);

};

//define , operator
Coardinate Coardinate::operator,(Coardinate C)
{
    //c3=(c1,c2)//c3=c1
    Coardinate temp;
    temp.x=x;
    temp.y=y;
    return temp;

}

int main()
{
    Coardinate c1,c2,c3;
    c1.setdata(3,5);
    c2.setdata(6,7);
    cout<<"c1: ";
    c1.showdata();
    cout<<"c2: ";
    c2.showdata();
    c3=(c1,c2);//way2: c1.operator,(c2);
    cout<<"After overloading"<<endl;
    cout<<"c3: ";
    c3.showdata();
}
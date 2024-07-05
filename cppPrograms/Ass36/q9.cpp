//in q8. provided Overloaded insertion(<<) and extraction operator(>>)
#include<iostream>
using namespace std;
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

    //Question 9
    //declare >> operater
     friend istream& operator>>(istream&,Coardinate&); 

     //declare << operator
    friend ostream& operator<<(ostream&,Coardinate);//here no need for passig refrence [jese printf]

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

//QUESTION 9
//define >> operator
istream& operator>>(istream &bin,Coardinate&C)
{
    bin>>C.x>>C.y;
    return bin;//return istream reference//refers notes
}

//define << operator
ostream& operator<<(ostream &bout,Coardinate z)
{
    bout<<z.x<<" "<<z.y;
    return bout;//return refrence
}
int main()
{
    Coardinate c1,c2,c3;
    // c1.setdata(3,5);
    // c2.setdata(6,7);
    // cout<<"c1: ";
    // c1.showdata();
    // cout<<"c2: ";
    // c2.showdata();
    // c3=(c1,c2);//way2: c1.operator,(c2);
    // cout<<"After overloading"<<endl;
    // cout<<"c3: ";
    // c3.showdata();

    cout<<"Enter coardinate ";
    cin>>c1;//now we can use >> operator on Coardnate data type 
   // c1.showdata();
   cout<<c1;//overloeded << operator
}
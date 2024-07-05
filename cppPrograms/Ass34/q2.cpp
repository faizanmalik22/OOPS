/*Define a class cutomer with instance member cust_id,name,email,mobile.
 Define non-parameterized and parameterized constructer in the class
*/
#include<iostream>
using namespace std;
class Customer
{
    private:
    int id;
    //long int mobile;
    long mobile;
    //char name[30];
    string name;
    public:
    Customer()
    {

    }
    Customer(int ID,int M_num,string s)//char str[30]
    {
        id=ID;
        mobile=M_num;
        name=s;
    }

    void showdata()
    {
        cout<<"id="<<id<<" mobile="<<mobile<<" name="<<name<<endl;
    }
};

int main()
{
    Customer obj(144,6399055383,"faizan");//overflow ho rha hai num aa nhi pa rha mobile me
    obj.showdata();
}
//Define a class Person with name and age as instance variable as private members. Provide setters and getters as protected methods.Derive a class Employee from Person
//class with private instance  variable salaray. provide public methods setEmployee() and showEmployee
#include<iostream>
using namespace std;
class Person
{
    string name;
    int age;
    protected:
    //setter
    void setage(int n)
    {
        age=n;
    }
    void setName(string s)
    {
        name=s;
    }
    //getter
    int getAge()
    {
        return age;
    }
    string getName()
    {
        return name;
    }
};

class Employee:public Person
{ 
    private:
    double salaray;
    public:
    void setEmployee( string n,int ag,float sa)
    {
       setage(ag);//child class access thier parent protected member
       setName(n);
       salaray=sa;
    }
    void showEmployee()
    {
        cout<<"name="<<getName()<<" age="<<getAge()<<" saary="<<salaray<<endl;
    }

};

int main()
{
    Employee e1;
    e1.setEmployee("faizan",23,23000);
    e1.showEmployee();
}
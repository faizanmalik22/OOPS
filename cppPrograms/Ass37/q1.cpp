//Define a class person with name and age is instance variables, provide parametiresd constructer 
//with two formal arguments name and age, to inisialised instance variable
//conclusion: this and constructer
#include<iostream>
using namespace std;
class Person
{
   private:
   int age;
   //char name[30];
   string name;
   public:
   Person(int age, string name)
   {
     this->age=age;
     this->name=name;
   }

   void showdata()
   {
    cout<<"age="<<age<<" name="<<name<<endl;
   }

};

int main()
{
    Person p(23,"faizan");
    p.showdata();
    return 0;
}
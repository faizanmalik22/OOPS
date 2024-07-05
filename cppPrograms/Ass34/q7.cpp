/*Define class Student and write a program to enter student detail using 
  constrcuter and define member function to display all the student values
*/
#include<iostream>
using namespace std;
class Student
{
    private:
    int id,roll;
    string name;
    public:
    Student(int d,int r,string n)
    {
       id=d;
       roll=r;
       name=n;
    }
    void display()
    {
        cout<<"id="<<id<<" roll="<<roll<<" name="<<name<<endl;
    }
};

int main()
{
    Student s1(2018,197,"faizan"),s2(2019,198,"ankit"),s3(20188,200,"sourav");
    s1.display();
    s2.display();
    s3.display();
}
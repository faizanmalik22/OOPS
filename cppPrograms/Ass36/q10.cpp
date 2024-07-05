/*define a class Student with roll no, name and age as instance variables.
 Create setStudent() and showStudent() methods in the class.Overload operator == to compare two student

*/
#include<iostream>
using namespace std;
class Student
{
    private:
        int roll_no;
        string name;
        int age;
    public:
    void setStudent(int R,string name,int A)
    {
        roll_no=R;
        age=A;
        this->name=name;
    }
    void showStudent()
    {
        cout<<"rollnum="<<roll_no<<" "<<"name= "<<name<<" "<<"age= "<<age<<endl;
    }

    //declare == operator to compare two Student type datatype
    int operator==(Student);
};

//define operator ==
int Student::operator==(Student s)
{
    if(roll_no==s.roll_no&&age==s.age&&name==s.name)
    return 1;
    else
    return 0;
}
int main()
{
    Student s1,s2,s3;
    s1.setStudent(197,"faizan",22);
    s2.setStudent(197,"faizan",22);
    s1.showStudent();
    s2.showStudent();
    int x=s1==s2;
    cout<<x;
}
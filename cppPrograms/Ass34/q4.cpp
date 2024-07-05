//Define a class Book with bookid,title,and price as instance member variable.define non-parameterised and parameterised constructer in the class
#include<iostream>
using namespace std;
class Book
{
   private:
   int bookid;
   double price;
   string str;
   public:
   Book(int b_id,double p,string s)
   {
    bookid=b_id;
    price=p;
    str=s;
   }
   //non-parameterised constrcuter
   Book()
   {

   }
};

int main()
{
    
}
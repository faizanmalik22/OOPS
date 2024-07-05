//Write a c++ program to define a strcuture to handle book record (bookid, title, price). also define function inputBook and displayBook to take input book data from user and display book data
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
struct Book{
    int bookid;
    char title[30];
    float price;
};

struct Book input_Book()//jo call krega uske variable me data store hoga(jo dodega pair uske dukhenge hehe("_")
{
  struct Book b1;
   cout<<"Enter bookid,title and price ";
   cin>>b1.bookid;
   //fflush(stdin); in c
   cin.ignore();//(oops concept used)//in c++ same kaam as fflush 
   //fgets(b1.title,30,stdin); in c
   cin.getline(b1.title,30);//(oops concept used)//in c++ same use as fgets()
    cin>>b1.price;
   return b1;//let return 5(int is return type) just copy the data

}

void Display_book(struct Book b)//(int x)
{
//    printf("%d ",b.bookid);
//    printf("%s ",b.title);
//    printf("%d",b.price);
   cout<<b.bookid<<" "<< b.title<<" "<< b.price;
}

int main()
{
   struct Book b1={197,"let us c",890.0},b2,b3;
  b2=input_Book();
   Display_book(b2);
}
/*Define a class Number with size and arr pointer as instance variable. Provide 
  Constructer to initialise instance member function, dynamically allocate an array
  of given size and store address in arr variable of object. also define destructer to deallocate memory of array. implement deep copy using copy constructer 
  to avoid memory issue.
*/
#include<iostream>
using namespace std;
class Number
{
    int size,*arr;
    public:
    Number(int n,int *p)
    {
        size=n;
        arr=p;
    }

    void dynamically_allocate()
    {
        arr=new int [size];//dynamically create array of size and type int
    }
  
  //destructer
  ~Number()
  {
    free(arr);
  }

};
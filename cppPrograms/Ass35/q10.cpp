/*
   consider the following class array
   class Array
   {
     int *p;
     int size;
     public:
     //methods

   };
   define constrcuter to allocate an array of given size.(size is given through parameter).
   Define a subscript operator to access the element at given index. define 
   Destructer to dealloacte memory of array
   1.make dynamically  array of given size
   2.make methods to setdata 
   3.overload [](subscript)operator 
  revise pointer: we know p[i]=*(p+i)that location of variable pointed by p
*/

#include<iostream>
using namespace std;
#define ARRAY_INDEX_OUT_OF_BOUND 1
class Array
{
   private:
   int *p;
   int size;
   public:
   //constrcuter to allocate array dynamically of given size
   Array(int n)
   {
       size=n;
      p=new int[size];
   }
   //default constrcuter
   Array(){}

   //destrcuter
   ~Array()
   {
    //free(p);//when current object going to destroy destructer call explicitly
    delete []p;
   }

   //setdata
   void setdata()
   {
      int i;
      cout<<"enter "<<size<<" Elements into array ";
      for ( i = 0; i <size; i++)
            cin>>p[i];
      
   }

   //showdata
   void showdata()
   {
      for (int i = 0; i <size; i++)
             cout<<p[i]<<" ";
     cout<<endl;
   }

   //overload [] operator return integer type value of that loaction
  int operator[](int index);//int&

};

//define [] operator for Array data type{int *p; p[i]=*(p+i) no Error} 
//if we write Array obj; obj[i];error [bcz this is Array type opearand]
int Array::operator[](int index)//yu van also write int& return type as reference
{
  //mine without bound checkinh=g
  /*
    int x;
    x=p[index];//caller object pointer p and its index number index jo bhi value return krega assign into x and return the value
    return x;
    */
   //SIr
    if(index>=size)//bound checking
  {
    cout<<"Array index out of bound";
    //exception handling
    throw ARRAY_INDEX_OUT_OF_BOUND;
  }
  return p[index];//*(p+index)=value of that location //return type int& hota tb refernce return hota
}

int main()
{
    Array obj1(10),obj2;
    obj1.setdata();
    obj1.showdata();
    //just write for future when i visit this again may be i dont understad the code to bas isiliye ye likha hai
    //just write for the understanding  power of opeartar overloading you can ignore bcz you know how operatar overloading works

    //befor overloaded [] operatar
    // cout<<obj1[1];  ERROR("_") not works on Array type dtat type
    /*no operator "[]" matches these operandsC/C++(349)
    q10.cpp(81, 14): operand types are: Array [ int ]
    q10.cpp(81, 14): built-in operator[](<pointer to object>, <ptrdiff_t>) does not match because argument #1 does not match parameter
    q10.cpp(81, 14): built-in operator[](<ptrdiff_t>, <pointer to object>) does not match because argument #1 does not match parameter
    Array obj1
*/
    
    //After overloading of [] operator for Array type operand
    //argument for index position which u want the value
   cout<<obj1[5];//way2. obj1.operator[](1) //here [] opeartor overload for Array type operand("_")
    
}


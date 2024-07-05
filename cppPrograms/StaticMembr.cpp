#include<iostream>
using namespace std;
// class item
// {
//     public://(now instance variable acces outside class body)
//    int a,b;//instance memeber variable(by default private)//values by default Garbage
//     static int k;//static member variable(class ka variable("_")
// };

//  int item::k;//define static member variable(required)//when nothing assign then by default zero
// int main()
// {
//     //cout<<a;
//     // item obj,obj2;
//     // obj.a=10;
//     // obj.b=20;
//    // k=10; Error: main doesnot recognized it
//     // obj.k=60;
//     // obj2.k++;
//     // cout<<obj2.k;
//    // cout<<obj.a<<" "<<obj2.b;//garbage in obj2 ke b me (because we dos'nt assign anything)
   
//    //when object not created then we use membership label to use static member varaibale
//    //way2 // access static member variable
//    item::k=10;
//    cout<<item::k;
// }

class item
{
    private://(now instance variable acces only inside class body)
      int a,b;//instance memeber variable(by default private)//values by default Garbage
      static int k;//static member variable(class ka variable("_")
   public:
   void set_a(int x){a=x;}
   int get_a(){return a;}
   void set_b(int y){b=y;}
   int get_b(){return b;}
    void set_k(int m){k=m;}
   int get_k(){return k;}
};

 int item::k;//define static member variable(required)//when nothing assign then by default zero
int main()
{
    //cout<<a;
      item obj,obj2;
    // obj.a=10;
      obj.set_a(10);
    // obj.b=20;
    obj.set_b(20);

   // k=10; Error: main doesnot recognized it
    // obj.k=60;
    obj.set_k(60);
    // cout<<obj2.k;
      cout<<obj2.get_k()<<endl;
   // cout<<obj.a<<" "<<obj2.b;//garbage in obj2 ke b me (because we dos'nt assign anything)
   cout<<obj.get_a()<<" "<<obj.get_b()<<endl;
   
   //when object not created then we use membership label to use static member varaibale
   //way2 // access static member variable
   //item::k=10;
   //cout<<item::k;
   cout<<obj.get_k();
}
//define a function to check weather a given number is prime or not
#include<iostream>
using namespace std;
int is_prime(int num)
{  
    int i;
    for ( i =2; i<num; i++)
          if(num%i==0)
             if(i!=num)
               return 0;
   return 1;
    
}
int main()
{
    cout<<is_prime(13);
}
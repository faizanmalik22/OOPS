//DEfine a function to calculate x raised to the power y
#include<iostream>
using namespace std;
//define function
int calculate_power(int x,int pow)
{
    int result=1;
    for (int i =1; i <=pow; i++){
       if(pow==0)
        return 1;
        result=result*x;
    }
  return result;

}

int main()
{
    cout<<calculate_power(3,3);
}
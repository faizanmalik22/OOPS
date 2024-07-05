//Define a function to check weather a given number is a term in a fibonacci series or not
#include<iostream>
using namespace std;
int is_term_or_not_in_fibonacci_series(int term)
{
    if(term==0)//when term=0
      return 1;
    int t=0;
    int t1=0,t2=1;
    while (t<term)//jab tk ham us term tk phucnh nhi jate usse just age jate hi loop end
    {
       t=t1+t2;//first two term 
       t1=t2;
       t2=t;
       if(t==term)
       return 1;
    }
    return 0;
}

int main()
{
    cout<<is_term_or_not_in_fibonacci_series(4);
}
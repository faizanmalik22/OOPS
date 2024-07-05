//DAF to find highest digit i given number
#include<iostream>
using namespace std;
int find_highest_digit_in_given_number(int n)//[8]
{
    int max;
        max=n%10;
        while (n)
        {
            if(max<n%10)
                max=n%10;
            n=n/10;   
        }
        
    return max;

}

int main()
{
    cout<<"max is "<<find_highest_digit_in_given_number(87654);
}
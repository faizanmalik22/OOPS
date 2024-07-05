//define a function to sort an array of integers in ascending or descending order depending on bool type argument(true for ascending and false for descending)use default argument to impliment it
#include<iostream>
using namespace std;

int* sortArray(int [],int,bool x=true);
int main()
{
    int ar[]={4,8,1,33,44,6,89};
    int *p;
    p=sortArray(ar,7,false);
    for (int i = 0; i <7; i++)
    {
          cout<<" "<<p[i];
    }
    
    
}
int* sortArray(int arr[],int size,bool x)
{
    int i,j,temp;
    if(x)
    {
         for ( i = 0; i <size-1; i++)
              for ( j =i+1; j<size; j++)
                 if (arr[j]<arr[i])
                 {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                 }
    }
    else
    {
        for ( i = 0; i <size-1; i++)
              for ( j =i+1; j<size; j++)
                 if (arr[i]<arr[j])
                 {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                 }   

    }
     return arr;
}

//true or false for asscending or descending
//in q4.define a method to dynamically create an array of Time object with specified size(received through arguement )ad return array
#include<iostream>
using namespace std;
class Time//Distance 
{
    private:
    int hr,min,sec;
    public:
    void setTime(int hr,int min,int sec)
    {
        this->hr=hr;
        this->min=min;
        this->sec=sec;
    }
    void shoeTime()
    {
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }
    
    //setter

    //getter
    int gethour()
    {
        return hr;
    }

    int getmin()
    {
        return min;
    }

    int getsec()
    {
        return sec;
    }

};

Time* d_Array_of_time_object(int size)
{
   // Time *p;
   // p=new Time[size];
    //return p;//array ka naam bhar likhna mtlb uska base addres likhna
    return new Time[size];//array return(address)
}
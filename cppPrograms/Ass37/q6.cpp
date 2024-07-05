//in q4, Define a method to sort time array
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
  //Time operator>(Time);
  bool operator>(Time);
  Time Generalize();
   
};

Time* d_Array_of_time_object(int size)// time* isiliye q ki address retur ho rha hai na ki ordinary value
{
   // Time *p;
   // p=new Time[size];
    //return p;//array ka naam bhar likhna mtlb uska base addres likhna
    return new Time[size];//array return(address of fisrt object)//bcz it return base address
}
 
 //define > operator for Time object 

// Time Time::operator>(Time t)
// {
//     //1.pahle hour compare krenge 2. agr hour equal nikle tb min compare krnege3.agar min equal nikli tb sec compare krenge
//     if(hr>t.hr)
//      return *this;
//      else if(hr<t.hr)
//      return t;
//      else if(min>t.min)
//      return *this;
//      else if(min<t.min)
//      return t;
//      else if(sec>t.sec)
//      return *this;
//      else
//      return t;

// }

bool Time::operator>(Time t)
{
    //1.pahle hour compare krenge 2. agr hour equal nikle tb min compare krnege3.agar min equal nikli tb sec compare krenge
    if(hr>t.hr)
     return true;
     else if(hr<t.hr)
     return false;
     else if(min>t.min)
     return true;
     else if(min<t.min)
     return false;
     else if(sec>t.sec)
     return true;
     else
     return false;

}

Time Time::Generalize()
{
      hr=hr+min/60;
      min=min%60;
      min=min+sec/60;
      sec=sec%60;
      
}

void sortTimeArray(Time *p,int size)//bcz we pass array or we know array pass krna mtlb uska base address pass krna
{
     int i,j;
    Time temp;
    for ( i = 0; i <size ; i++)
    {
        p[i].Generalize(); // let 10:80:65//become 11:21:5
        for ( j =i+1; j <size; j++)
        {
            p[j].Generalize();// let 10:80:65//become 11:21:5 (if u want to do generalize wrna mt use kro) 
              if(p[i]>p[j])
              {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
              }
        }
        
    }
    
}
int main()
 {
//     Time t1,t2,t3;
//     t1.setTime(12,10,65);
//     t2.setTime(12,20,25);
//     t1.Generalize();
//     t2.Generalize();
//      t3=t1>t2;
//     t3.shoeTime();

  int s;
   Time *p;//bcz it store base addrress
   cout<<"enter size of array ";
   cin>>s;

   //make array dynamically using d_Array_of_time_object(); function and passing the size of array
    p=d_Array_of_time_object(s);
    for (int hr,min,sec, i = 0; i <s; i++)
    {
        cout<<"enter hr , min , sec for "<<i+1<<" object ";
         cin>>hr>>min>>sec;
         p[i].setTime(hr,min,sec);//*(p+i) we know how it solve
         cout<<endl;
    }
    
    //print unsorted array
 for (int  i = 0; i <s; i++)
    {
        p[i].shoeTime();
         cout<<endl;
    }
    
    

    sortTimeArray(p,5);//here we sort the array

     cout<<"print sorted array\n";
    for (int  i = 0; i <s; i++)
    {
        p[i].shoeTime();
         cout<<endl;
    }
}

//Alhamdulillah (ques 7 also done )

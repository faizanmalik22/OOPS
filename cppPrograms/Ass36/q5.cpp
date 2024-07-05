//in q4.define friend operator + to concatenate two Array object
#include<iostream>
using namespace std;
class Array
{
    private:
        int size;
        int *p;
    public:
      Array(int n)//refernece bnaya hai taki recusrion na ho 
      {    size=n;
           p=new int[size];
      }
      
      //declare =
      void operator=(Array&);

      void setdata()
      {
        int i,j;
        cout<<"Enter "<<size<<" Elements\n";
        for(i=0;i<size;i++)
         cin>>p[i];
      }

      void showdata()
      {
        for (int i = 0; i <size; i++)
        {
            cout<<p[i]<<" ";
        }
        cout<<"\n";
      }
 
 //define + to merge 
 friend void operator+(Array,Array);
      //destrcter
      ~Array()
      {
        free(p);
      }
      
};
//deine = operator for deep copy{refre notes if confused}
void Array::operator=(Array &C)
{
        size=C.size;
         p=new int[size];//new array address assign into caller object
         for (int i = 0; i <size; i++)
             //*p=*(C.p);//x=y//addres=value{ for only one data vlue copy of array}
             p[i]=C.p[i];//for entire array vlaue copy
         
        
}

//define + 
void operator+(Array a,Array b)
{
    int *ptr,i;
    int n=a.size+b.size;
    ptr=new int[n];
    for ( i = 0; i <n; i++)
        {
           if(i<a.size)
           ptr[i]=a.p[i];
           else
           ptr[i]=b.p[i-a.size];//yaha bhi to data 0 index se rkha hoga isiliye 
        }
        //print the arry
        for (int i = 0; i <n; i++)
            cout<<ptr[i]<<" ";

}

int main()
{
    Array a1(5),a2(5);
    a1.setdata();
    cout<<"a1= ";
    a1.showdata();
    a2=a1;//copy the data through deep copy//[now not base address copy of a1.p ka a2.p me so now not the case of  both object point towords same array] but bcz we do deep copy so the case is not like shallow copy here only data copy not base address
    cout<<"a2=";
    a2.showdata();
    //now if we changes into a1 it should not effect a2 aray[deep copy case bcz both object point toword different array]
    a1.setdata();
    cout<<"a1= ";
    a1.showdata();
    //
    cout<<"a2= ";
    a2.showdata();
    //
    cout<<"merging\n";
    a1+a2;//operator+(a1,a2);
}
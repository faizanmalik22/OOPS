/* 
    Define a c++ class function
    class fraction
    {
        long numerator;
        long denominator;
        public:
        fraction(long n=0,long n=0);//default argument ("_")
    };

    define an operator + to add two fraction object
*/
#include<iostream>
using namespace std;
class fraction
{
    private:
    long numerator;
        long denominator;
        protected://study
         long lcm(int d1,int d2)
         {
           int L;
           //jo d1 ya d2 me bada ho wo l me assign krdo
           //tab tk loop chalao jab tk L ki value choti ya equal nhi hojati d1*d2 se 
           for ( L=d1>d2?d1:d2; L<=d1*d2; L++)
           {
              //agar L lcm hai to wo d1 se bhi or d2 se bhi completely divisible hoga
              //or agr nhi to l++ tb tk jb tk //2 ,3 2*3=6 lcm so L++ tb tk jb tk L=3 s3 l=6 nhi hojata 
               if(L%d1==0&&L%d2==0)
               return L;
        
           }
           
         }
        public:
         //constrcuter with default argument
        fraction(long n=0,long d=0)//default argument ("_")
        {
            numerator=n;
            denominator=d;
        }

        //declare + operator(function)
        fraction operator+(fraction);
        

        void showdata()
        {
            cout<<"numirator="<<numerator<<" denominator="<<denominator<<endl;
        }
};


//define fraction//membership label and fun name
fraction fraction::operator+(fraction f)
{ 
    fraction temp;
    //1/2 + 3/4=5/4;
    //first we have to calcualte lcm
    long L;
    L=lcm(denominator,f.denominator);//call the lcm function 

    //now we have to calculate new numirator
    //formula L*n1/d1 + L*n2/d2
    temp.numerator=numerator*(L/denominator) + f.numerator*(L/f.denominator);
    temp.denominator=L;
    return temp;
    
}

int main()
{
    fraction f1(1,2),f2(3,4),f3;//1/2 + 3/4=5/4;
  
  //
  f3=f1+f2;
    f3.showdata();
}
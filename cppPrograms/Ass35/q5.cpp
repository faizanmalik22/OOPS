//Define a class matrix to represent 3*3 matrix. provide appropriate instance metho. Also define 
//operator +, operator -, operator * to perform addition, subtraction and multiplication rescpectively
#include<iostream>
using namespace std;
class Matrix
{
    private:
    int a[3][3];
    public:
    //now we have define operator +, - ,* to perform operation on matrix type data type
    //Matrix obj1,obj2//obj1*obj2
  void inputdata()//setdata means passing argument
  {
    cout<<"Enter 9 elements"<<endl;
    int i,j;
    for (  i = 0; i <3; i++)
          for(j=0;j<3;j++)
            cin>>a[i][j];
    
  }
  //
  void showdata()
  {
    int i,j;
    cout<<"\n";
    for ( i = 0; i <3; i++)
    {
         for(j=0;j<3;j++)
          cout<<a[i][j]<<" ";
      cout<<"\n";
    }
  }

    Matrix operator+(Matrix);//here Matrix is return type 
    
    // //declare - operator 
     Matrix operator-(Matrix);

    // //declare * operator
    Matrix operator*(Matrix);

};

//define + operator 
Matrix Matrix::operator+(Matrix M)

{
   Matrix temp;
   for ( int i = 0; i <3; i++)
      for( int j=0;j<3;j++)
        temp.a[i][j]=a[i][j]+M.a[i][j];//object.a[i][j]

return temp;
   
}

//define - operator(function) 
Matrix Matrix::operator-(Matrix M)

{
   Matrix temp;
   int i,j;
   for ( i = 0; i <3; i++)
      for(j=0;j<3;j++)
        temp.a[i][j]=a[i][j]-M.a[i][j];//object.a[i][j]

return temp;
   
}

//define * operator
Matrix Matrix::operator*(Matrix M)
{
 Matrix temp;
   int i,j,s,c;
   for(int k=0;k<3;k++)//outer most loop
   {
        for ( i = 0; i <3; i++)
        {
            s=0;
            for(j=0;j<3;j++)
            {
                s=s+a[k][j]*M.a[j][i];
            } 
        temp.a[k][i]=s;
     }   
  }
 return temp;
}


int main()
{
    Matrix m1,m2,m3,m4,m5;
    m1.inputdata();
    m2.inputdata();
    // m3=m1+m2;//+ overloaded for Matrix type operand("_")
    // m3.showdata();
    // //subtraction
    // m4=m1-m2;
    // m4.showdata();

    //multiplication
    m5=m1*m2;
    m5.showdata();

}
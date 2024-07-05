/*Define a class Testresult with properties roll_no, right,wrong, net_score.
 also define class properties right_weightage, wrong weightage. provide methods to set and get all the properties

 */
#include<iostream>
using namespace std;
class Testresult
{
    private:
    int roll_no, right, wrong, net_score;
    //class properties
    //wightage means 1question =4 marks ( wrong weightage: 4 wrong pr 1marks didacte)
    static int right_weightage,wrong_weightage;//fix rhenge puri class ke liye
    public:
    // void setdata(int roll,int Right,int Wrong,int Net_score)
    // {
    //     roll_no=roll;
    //     right=Right;
    //     wrong=Wrong;
    //     net_score=Net_score;

    // }
    void setrollnum(int r)
    {
        roll_no=r;
    }
    void setright(int x)
    {
        right=x;
    }
    void setwrong(int x)
    {
      wrong=x;
    }

//    int netscore()
//   {
//     return right-wrong;//("_")
//   }
void setnet_score(int n)
{  
   net_score=n;
}
    int getrollnum()
    {
        return roll_no;
    }
    int getRightanswer()
    {
        return right;
    }

    int getwrong()
    {
        return wrong;
    }
    int getNet_score()
    {
        return net_score;
    }

    //
    static void setrightweightage(int x)
    {
        right_weightage=x;
    }
    static void wrongweightage(int x)
    {
         wrong_weightage=x;
    }

    static int getrightweightage()
    {
        return right_weightage;
    }
     static int getwrongweightage()
    {
        return wrong_weightage;
    }
};
//define static variable(required)
int Testresult::right_weightage;
int Testresult::wrong_weightage;
int main()
{
    
}
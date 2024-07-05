/*in q6. derive a class GameResult with an array of 5 int type variable to store the result in each round.
  Result value is 2 for win , 0 for loose and 1 for draw.
  provide methods to set Result and getResult. 
  Write method to calculate final result of the game
*/
#include<iostream>
using namespace std;
class Game
{
   private:
   int R_array[5];
   public:
   void setScore(int round,int score)
   { 
      //har round ka score store hai R_array me
       R_array[round]=score;//array[1]=5//array[2]=10
   }

   int getScore(int round)
   {
     //which round score you want
       return R_array[round];
   }
};
//derive Game class
class GameResult:public Game
{ 
    private:                                                      //Round: 0 1 2 3 4
        int Reuslts_array[5];//each round result score in this array //Score:[1 0 2 0 1]
    public:
        void setResult(int chance)//int a[] //[1 chance =5 round]
        {
            int s=0;
            for (int i = 0; i <5; i++)
            {
               s=s+getScore(i);
            }
            Reuslts_array[chance]=s; //[1 chance =5 round]
        }
   //getResult
      int getResult( int chance)
      {
          return Reuslts_array[chance];//if here returning value =2 win, elseif value =1 draw, else value=0 LOOSE
      }

      //final result
      bool finalResult(int chance)
      {
        if(Reuslts_array[chance]==2)
        return "Win";
        else if(Reuslts_array[chance]==1)
          return "Draw";
          else
          return "Losse";
      }
};

//sir
class Game
{
    private:
        int A[5];
    public:
        void setScore(int round,int score){
            A[round]=score;
        }
        int getScore(int round){
            return A[round];
        }

};
class GameResult:public Game{
    private:
        int result[5];
    public:
        void setResult(int round,int r) {
            result[round]=r;
        }
        int getResult(int round){
            return result[round];
        }
        int getFinalResult(){
            int s=0;             //mene round wale me kra tha sum sir result wale ka kr rhe hai
            for(int i=0;i<5;i++)
                s=s+result[i];
            return s;
        }
};

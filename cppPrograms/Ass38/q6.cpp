/*Define a class Game with an array of 5 int type variable as instance member to store the score in each
  of 5 rounds.provide method to setScore(int round, int score).
  Also provide method getScore(int round) 
  
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
       R_array[round]=score;//array[1]=5//array[2]=10
   }

   int getScore(int round)
   {
     //which round score you want
       return R_array[round];
   }
};
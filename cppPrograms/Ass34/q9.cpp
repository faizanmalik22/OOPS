//Define a class Room for hotel management project with room number,room type,is_AC,price as instance member variable. initialise variable using constructer.
#include<iostream>
using namespace std;
class Room
{
    private:
        int room_num;
        string room_type;
        bool is_AC;
        double price;
    public:
        Room(int r_num,string rt,bool Ac,double p)
        {
            room_num=r_num;
            room_type=rt;
            is_AC=Ac;
            price=p;
        }
};
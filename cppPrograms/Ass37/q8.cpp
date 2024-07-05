/* Define a class String with char Pointer and length of the string as instance member variable.
   Define a method to dynamically create an array of char type and hold the input string in such a way 
   that the array length is just enough to accomodate the input string
 */
#include<iostream>
#include<string.h>
using namespace std;
class String
{
    private:
    char *p;
    int S_length;

};

int main()
{
    char s[]="hello";
    
   cout<< strlen(s);

}

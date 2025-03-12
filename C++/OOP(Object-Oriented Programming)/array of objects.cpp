// array of objects...... (OPP)
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
using namespace std;

class Student 
{
    private :
        string name ;
        int id ;
        int mark ;

    public :
        void setValues()
        {
            cout <<"Give Me Your Information Please " << endl;
            cout << "enter your name : " << endl;
            cin >> name ;
            cout << "enter your id : " << endl;
            cin >> id ;
            cout << "enter your mark : " << endl;
            cin >> mark ;
        }
} ;

int main ()
{      
   /*
   ///!  10 objects 

   Student ob1 ;
   Student ob2 ;
   Student ob3 ;
   Student ob4 ;
   Student ob5 ;
   Student ob6 ;
   Student ob7 ;
   Student ob8 ;
   Student ob9 ;
   Student ob10 ;
   
   */
   Student ob[10] ;       // array of objects 

   for(int i = 0 ; i < 10 ; i++)
   {
        ob[i].setValues() ;
   }

    return 0 ;
}
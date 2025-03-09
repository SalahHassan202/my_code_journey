// sum of to marks by class .... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;

class School
{
    private :
        string name ;
        int mark ;
    public :
        School(string n , int m )
        {
            name = n ;
            mark = m ;
        }
        int getMark()
        {
            return mark ;
        }
} ;



int main ()
{      
   
    School ob1("Salah" , 200);
    School ob2("Hasan" , 300) ;
    // cout << ob1.mark + ob2.mark << endl;         // error ===> mark private 
    cout << ob1.getMark() + ob2.getMark() << endl;



    return 0 ;
}
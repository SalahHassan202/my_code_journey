// operator overloading...... (OPP)
// compare betwee two values with 3 methods
// first method 
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
using namespace std;

class Y 
{
    private :
        int x = 0 ;
    public :
        void setValue ()
        {
            cout <<"enter x : " ;
            cin >> x ;
        }
        void compare (Y ob1 , Y ob2)
        {
            if(ob1.x == ob2.x)
            {
                cout << ob1.x << " = " << ob2.x << endl;
            }
            else
            {
                cout << ob1.x << " != " << ob2.x << endl;

            }
        }
} ;

int main ()
{      
    Y ob1 ;
    Y ob2 ;
    ob1.setValue() ;
    ob2.setValue() ;
    ob1.compare(ob1 ,ob2) ;

    return 0 ;
}

//! second method 
/*

#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
using namespace std;

class Y 
{
    private :
        int x = 0 ;
    public :
        void setValue ()
        {
            cout <<"enter x : " ;
            cin >> x ;
        }
        void compare ( Y ob2)
        {
            if(x == ob2.x)
            {
                cout << x << " = " << ob2.x << endl;
            }
            else
            {
                cout << x << " != " << ob2.x << endl;

            }
        }
} ;

int main ()
{      
    Y ob1 ;
    Y ob2 ;
    ob1.setValue() ;
    ob2.setValue() ;
    ob1.compare(ob2) ;

    return 0 ;
}



*/


//! third method 

/*


#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
using namespace std;

class Y 
{
    private :
        int x = 0 ;
    public :
        void setValue ()
        {
            cout <<"enter x : " ;
            cin >> x ;
        }
        void operator == (Y ob)
        {
            if(x == ob.x)
            {
                cout << x << " = " << ob.x << endl;
            }
            else
            {
                cout << x << " != " << ob.x << endl;

            }
        }
} ;

int main ()
{      
    Y ob1 ;
    Y ob2 ;
    ob1.setValue() ;
    ob2.setValue() ;
    ob1 == ob2 ;                   // operator overloading 

    return 0 ;
}





*/
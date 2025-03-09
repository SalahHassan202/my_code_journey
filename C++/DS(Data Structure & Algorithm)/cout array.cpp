// cout array
#include <iostream>
#include <string>
#include <iomanip>                                  
#include <algorithm> 
#include <cmath>
using namespace std;
 
int main()
{
    /*
    
    int : 4 byte 
    float : 4 byte 
    double : 8 byte
    string : 24 byte
    char : 1 byte    
    
    */

   // array start from index zero 

    string arr[3] = {"salah", "ahmed" , "ali"} ;
        
    cout << "*****Array*****" << endl;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
 

    return 0 ;
}


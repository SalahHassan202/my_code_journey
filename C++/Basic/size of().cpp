// how to know size of array
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
    int arr[] = {2 , 5 , 9} ;    
    cout << sizeof(arr) << endl;  // 12   
    cout << sizeof(arr) / sizeof(arr[0]) << endl;   // 3 



    return 0 ;
}


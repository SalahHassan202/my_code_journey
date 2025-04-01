// exercise1 array
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
    int size = 5 ;
    int arr[size] = {} ;

    cout << "*****enter elements*****" << endl;
    for(int i = 0 ; i < size ; i++)
    {
        cin >> arr[i] ; 
    }
    for(int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << " " ;
    }
 

    return 0 ;
}


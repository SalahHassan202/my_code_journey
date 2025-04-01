// seaarch element on the array
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
    int element  = 0 ;
    int index = 0 ;
    bool flag = 0 ;
    int arr[size] = {10 , 20 , 25 , 30 , 70 } ;

    
    cout << "Array : " << endl;
    for(int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;

    cout << "enter element that do you want to search on : " ;
    cin >> element ;
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] == element)
        {
            index = i ;
            flag = 1 ;       // found the element that i want to search on it 
        }
    }

    if(flag == 1 )
    {
        cout << "Founded" << endl;
        cout << "Position is : " << index + 1 << endl;        // position = index + 1  ;
    }
    else
    {
        cout << "Not Founded" << endl;
    }

   

    return 0 ;
}


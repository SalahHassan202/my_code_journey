// add element to array
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
    int arr[size] = {11 , 20 , 25 , 84 , 71 } ;

    cout << "Array Before Editing : " << endl;
    for(int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;

    int element = 0 ;    
    cout << "Enter the element : " ;
    cin >> element ;
    int index = 0 ; 
    cout << "Enter the index : " ;
    cin >> index ;

    // check for index and size 
    if(index > size) 
    {
        cout << "Invalied index" << endl;
        return 0;
    }
    else
    {
        for(int i = size ; i>index ; i--)         // shifting fromright to the left 
        {
            arr[i] = arr[i - 1] ;           // shifting
        }
        arr[index] = element ;
        size++ ;             // size = size + 1 ;
    }
    cout << endl;

    cout << "Array After Editing : " << endl;
    for(int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << " " ;
    }
        

    return 0 ;
}


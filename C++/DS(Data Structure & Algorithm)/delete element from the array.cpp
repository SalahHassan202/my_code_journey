// delete element from the array
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
    int arr[size] = {10 , 20 , 25 , 30 , 70 } ;

    cout << "Array Before Editing : " << endl;
    for(int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;

    cout << "enter element that do you want to delete it : " ;
    cin >> element ;
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] == element)
        {
            index = i ;
        }
    }

    for(int i = index ; i <size ; i++)
    {
        arr[i] = arr[i+1] ;
    }
    size-- ;             // size = size - 1 ;
  
    cout << "Array After Editing : " << endl;
    for(int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
   
        

    return 0 ;
}


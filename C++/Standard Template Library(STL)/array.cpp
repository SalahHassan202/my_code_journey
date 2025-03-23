#include <iostream>
#include <array>                // array

using namespace std ; 
int main()
{
    array<int , 5 > nums = {1 , 2 , 3 , 4 , 5 } ; 
    cout<< nums.front() << endl;          // 1 
    cout<< nums.back() << endl;           // 5 
    cout<< nums.at(3) << endl;            // 4 
    cout<< nums.size() << endl;           // 5
    
    return 0 ;
}
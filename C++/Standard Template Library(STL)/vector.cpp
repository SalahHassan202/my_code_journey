#include <iostream>
#include <vector>                // vector

using namespace std ; 
int main()
{

    vector <int> nums = {10 , 20 , 30} ;
    for(int num : nums)
    {
        cout << num << " " ;           // 10 20 30  
    }

    nums.push_back(40) ;
    nums.push_back(50) ;
    

    cout << endl;

    for(int num : nums)
    {
        cout << num << " " ;           // 10 20 30  40 50 
    }

    cout <<endl << nums.size() ;     // 5

    cout << endl << nums.front() ;  // 10 
    cout << endl << nums.back() ;        // 50

    nums.clear() ; 
    


    return 0 ;
}
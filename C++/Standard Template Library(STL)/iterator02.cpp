#include <iostream>
#include <vector>  
using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30, 40, 50};

    //    for (auto it = nums.begin(); it != nums.end(); it++)
    //    {
    //         cout << *it << " ";
    //    }
    
    for(auto num : nums)
    {
        cout << num <<" " ;          // 10 20 30 40 50 
    } 

    return 0;
}

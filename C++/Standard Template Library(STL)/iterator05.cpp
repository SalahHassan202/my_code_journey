#include <iostream>
#include <vector>  
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};

    // عكس القيم 
    for (auto it = nums.rbegin(); it != nums.rend(); it++)
    {
        cout << *it << " ";      // 5 4 3 2 1 
    }

    return 0;
}

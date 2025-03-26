
#include <iostream>
#include <vector>
#include <algorithm>        // مكتبة الخوارزميات
using namespace std;

int main()
{
    vector<int> nums = {5, 1, 4, 2, 3};

    sort(nums.begin(), nums.end() , greater<int>());  // sorting for all element in vector
    for (int num : nums)
    {
        cout << num << " ";         // 5 4 3 2 1
    }
    return 0;
}









#include <iostream>
#include <vector>
#include <algorithm>         // مكتبة الخوارزميات
using namespace std;

int main()
{
    vector<int> nums = {5, 1, 4, 2, 3};

    sort(nums.begin(), nums.end());  // sorting for all element in vector
    for (int num : nums)
    {
        cout << num << " ";         // 1 2 3 4 5
    }
    return 0;
}

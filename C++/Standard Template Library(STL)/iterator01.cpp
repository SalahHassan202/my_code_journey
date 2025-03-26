#include <iostream>
#include <vector>  
using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30, 40, 50};

    vector<int>::iterator it;        // initialize for  Iterator

    
    for (it = nums.begin(); it != nums.end(); it++)
    {
        cout << *it << " ";          // values of vector
    }

    return 0;
}

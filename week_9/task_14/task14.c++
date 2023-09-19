#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {5, 4, 3, 2, 1};

    //! Method One
    reverse(nums.begin(), nums.end());
    //! Method Two
    sort(nums.begin(), nums.end());

    //! Method Three -> Use Swap + Loop For Challenge
    for (int i = 0; i < nums.size(); i++)
    {
        int middle = nums.size() / 2;
        if (i < middle)
        {
            swap(*(nums.begin() + i), *(nums.end() - 1 - i));
        }
    }

    for (int i : nums)
    {
        cout << i << "\n";
    }

    return 0;
}

// Needed Output
// 1
// 2
// 3
// 4
// 5
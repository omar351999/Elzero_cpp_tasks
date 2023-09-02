#include <array>
#include <iostream>
using namespace std;

int main()
{
    array<int, 6> nums = {10, 20, 30, 40, 20, 50};

    //! Method 1
    cout << "frist: " << nums[0] << endl;
    cout << "last: " << nums[nums.size() - 1] << endl;

    //! Method 2
    cout << "frist: " << nums.front() << endl;
    cout << "last: " << nums.back() << endl;

    //! Method 3
    cout << "frist: " << nums.at(0) << endl;
    cout << "last: " << nums.at(nums.size() - 1) << endl;

    return 0;
}
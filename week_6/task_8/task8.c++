#include <array>
#include <iostream>
using namespace std;

int main()
{
    // Your Code Here
    // int nums[3]={1,2,3};
    array <int,3> nums={1,2,3};
    // Do Not Edit
    nums.fill(100);
    cout << nums[0] << "\n"; // 100
    cout << nums[1] << "\n"; // 100
    cout << nums[2] << "\n"; // 100

    return 0;
}
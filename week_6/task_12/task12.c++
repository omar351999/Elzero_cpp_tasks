#include <iostream>
using namespace std;

int main()
{

    int nums[] = {1, 2, 3, 5};
    int vals[] = {10, 20, 40, 30, 10, 60};
    int i1 = nums[3]; // 5
    int i2 = nums[0]; // 1
    int i3 = nums[1]; // 2
    int i4 = nums[2]; // 3

    // Need To Get Ouput 150
    cout << vals[i1] + vals[i3] + vals[i2] + vals[i4];
    return 0;
}
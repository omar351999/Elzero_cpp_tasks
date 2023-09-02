#include <iostream>
using namespace std;

int main()
{
    // Example 1
    int vals[] = {100, 300, 600, 200, 100};
    int mid = sizeof(vals) / 4;
    int lastindex = sizeof(vals) / 4 - 1;

    if (vals[0] == vals[lastindex] && vals[1] == vals[lastindex - 1])
    {
        cout << "Array Is Palindrome";
    }
    else
    {
        cout << "Array Is Not Palindrome";
    }
    return 0;
}
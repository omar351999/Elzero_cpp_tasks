#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> firstnumbers = {10, 30, 50, 70};
    vector<int> secondnumbers = {20, 40, 60, 80};
    vector<int> allnumbers;
    allnumbers.insert(allnumbers.begin(), firstnumbers.begin(), firstnumbers.end());
    allnumbers.insert(allnumbers.begin() + allnumbers.size(), secondnumbers.begin(), secondnumbers.end());
    
    sort(allnumbers.begin(), allnumbers.end());
    for (int val : allnumbers)
    {
        cout << val << endl;
    }
    return 0;
}

// Output Needed
// 10
// 20
// 30
// 40
// 50
// 60
// 70
// 80
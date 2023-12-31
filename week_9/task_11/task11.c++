#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers;
    vector<float> floats(100);

    // Fill Integers Here
    for (int i = 0; i < 100; i++)
    {
        numbers.push_back(100);
    }
    // Fill Floats Here
    for(float &v:floats){
        v=100.50;
    }

    cout << numbers.at(0) << "\n";  // 1000
    cout << numbers.at(99) << "\n"; // 1000

    cout << floats.at(0) << "\n";  // 100.50
    cout << floats.at(99) << "\n"; // 100.50
    return 0;
}
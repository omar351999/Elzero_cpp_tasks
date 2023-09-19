#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30, 40, 50, 60, 70, 80};
    vector<int>::iterator it = numbers.begin();

    // Write Method One
    it = numbers.begin() + (*numbers.begin() - numbers.size()) + (*numbers.begin() - numbers.size());

    // Write Method Two
    advance(it, (true - (-1) + true - (-1)));

    // Write Method Three
    it = numbers.end() - ((true - (-1) + true - (-1)));

    cout << *it << "\n"; // 50
    return 0;
}
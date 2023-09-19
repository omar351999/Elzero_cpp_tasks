#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 10, 40, 50, 60, 10, 80};
    int check = 10;
    int countone = 0;
    int counttwo = 0;

    // Write Method One
    countone = count(numbers.begin(), numbers.end() - 1, check);
    // Write Method Two
    for(int val:numbers){
        if(val==check){
            counttwo+=1;
        }
    }
    cout << "__________________" << "\n"; 
    cout << countone << "\n"; // 3
    cout << counttwo << "\n"; // 3
    cout << "__________________" << "\n";
    return 0;
}
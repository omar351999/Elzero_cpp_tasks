#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    cout << --num << " | " << num++ << " | " << ++num << "\n"; // 9 | 9 | 11
    cout << num++ << " | " << num << " | " << num-- << "\n"; // 11 | 12 | 12
    cout << num-- << " | " << num-- << " | " << num << "\n"; // 11 | 10 | 9
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;
    cout << sizeof(long double) << endl;
    return 0;
}
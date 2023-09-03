#include <iostream>
using namespace std;

int main()
{
    int num = 2;
    while (num < 520)
    {
        cout << --num << endl;
        num = num * 2 + 3;
    }
    return 0;
}

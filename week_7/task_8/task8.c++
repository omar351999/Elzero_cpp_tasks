#include <array>
#include <iostream>
using namespace std;

int main()
{
    for (int i = 2; i < 200; i =i*2+2)
    {
        cout << i << endl;
    }
    cout << "-----------------------" << endl;
    int i = 2;
    while (i < 200)
    {
        cout << i << endl;
        i = i*2+2;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    for (int i = 30; i > 0; i = i - 3)
    {
        if (i % 2 == 1)
        {
            cout << i << endl;
        }
    }

    return 0;
}

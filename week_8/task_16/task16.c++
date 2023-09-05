#include <iostream>
using namespace std;

// Write Your Function Here

int books(int b1, int b2, int b3, int shelves)
{
    int spaces = (shelves * 20) - (b1 * 2 + b2 * 4 + b3 * 6);
    if (spaces > 0)
    {
        return (shelves * 20) - (b1 * 2 + b2 * 4 + b3 * 6);
    }
    else
    {
        return 0;
    }
}
int main()
{
    cout << books(10, 4, 3, 4) << "\n"; // 26
    cout << books(10, 4, 3, 2) << "\n"; // 0
    return 0;
}
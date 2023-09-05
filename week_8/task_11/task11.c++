#include <iostream>
using namespace std;

// Write Your Function Here

int firstnegative(int arr[], int size)
{
    int num = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            num = arr[i];
            break;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > num && arr[i] < 0)
        {
            num = arr[i];
        }
    }
    return num;
}
int main()
{
    int numbers[] ={ -10, -20, 15, 100, 10, 5, -50, 0, -5, -10 }; // -5
    int numssize = size(numbers);
    cout << firstnegative(numbers, numssize) << "\n";
    return 0;
}
#include <iostream>
using namespace std;

// Write Your Function Here
int minpositive(int arr[], int size)
{
    int small = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            small = arr[i];
            break;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < small && arr[i] > 0)
        {
            small = arr[i];
        }
    }

    return small;
}
int main()
{
    int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0}; // 5
    int numssize = size(numbers);
    cout << minpositive(numbers, numssize) << "\n";
    return 0;
}
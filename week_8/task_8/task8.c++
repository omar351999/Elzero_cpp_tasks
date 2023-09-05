#include <iostream>
using namespace std;

// Write Your Function Here

int plusandmultiply(int arr[],int size){
    int even=0;
    int odd=1;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            even+=arr[i];
        }
        else{
            odd*=arr[i];
        }
    }
    return even + odd;
}

int main()
{
    int numbers[] = { 10, 20, 3, 30, 5, 7, 40 };
    int numssize = size(numbers);
    cout << plusandmultiply(numbers, numssize) << "\n";
    return 0;
}
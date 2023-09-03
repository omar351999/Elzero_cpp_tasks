#include <iostream>
using namespace std;

int main()
{
    cout << "##################### " << endl;
    int result = 0;
    int nums[] = {10, 20, -20, 13, 30, -30, 40};
    for (int i = 0; i < size(nums) ; i++)
    {
        if(nums[i]>0 && nums[i]%2==0){
            result +=nums[i];
        }
    }
    cout << "the result is: " << result << endl;
    cout << "##################### " << endl;
    int arr[5];
    int inp;
    cout << "enter five numbers: "<<endl;
    for(int i=4;i>-1;i--){
        cin>>inp;
        arr[i]=inp;
    }
    cout << "---------------------- " << endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    cout << "##################### " << endl;
    return 0;
}

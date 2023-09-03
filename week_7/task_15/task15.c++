#include <iostream>
using namespace std;

int main()
{
    int help_num = 4;
    int nums[] = {2, 4, 5, 6, 10};
    for(int i=int(NULL);i<size(nums);i++){
        cout<< nums[i] << " + " <<nums[help_num] <<" = ";
        cout << nums[i]+nums[help_num--] << endl;
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int nums[]={100,200,300,400,500,600,700};
    // for(int i=size(nums)-2;i>1;i--){
    //     cout << nums[i] << endl;
    // }
    int i=size(nums)-2;
    //   !frist answer
    /* 
    for(;;){
        if(i>1){
            cout << nums[i] << endl;
            i--;
        }else{
            break;
        }
    }
    */
    //! secoond answer
    for(;;){
            cout << nums[i] << endl;
            i--;
        if(i==1){
            break;
        }
    }
    return 0;
}

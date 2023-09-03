#include <iostream>
using namespace std;

int main()
{
  int nums = 100;

// Write Your Code Here
    for(int i=100;i<=1100;i+=100){
      cout<<i<<endl;
      if(i==1100 || i==100){
        continue;
      }else{
        cout<<i<<endl;
      }
      
    }
    return 0;
}
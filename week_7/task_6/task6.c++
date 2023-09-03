#include <iostream>
using namespace std;

int main()
{
  for(int i=10;i<1000000000;i*=i){
        cout<<i<<endl;
    }
        cout<<"-----------------------"<<endl;
    int i=10;
    while(i<1000000000){
        cout<<i<<endl;
        i*=i;
    }
    return 0;
}
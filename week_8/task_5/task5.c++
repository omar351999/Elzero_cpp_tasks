#include <iostream>
#include <cmath>
using namespace std;

// Write Your Function Here
void thepower(int num, int power)
{
    for(int i=power;i>1;i--){
        num=num*2;
    }
    cout <<(num);
}
/*  //! another way 
void thepower(int num, int power)
{
    cout << pow(num,power);
}
*/

int main()
{
    thepower(2, 5); // 32
    return 0;
}
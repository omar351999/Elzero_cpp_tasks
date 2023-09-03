#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 1000; i += 100) // Do Not Edit This Line
    {
        if(i==0 || i==1000){
            continue;;
        }
        cout << i << "\n";
    }
    return 0;
}
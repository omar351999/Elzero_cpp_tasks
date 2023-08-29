#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter numbers of kiloByte >> ";
    cin >> num;
    cout << num << " kiloByte =\n";
    cout << num*1024 << " Bytes =\n";
    cout << num*1024*8 << " bits\n";
    return 0;
}

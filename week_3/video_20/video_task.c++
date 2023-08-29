#include <iostream>
using namespace std;

int main()
{
    cout << "--------------------------------------------\n";
    char letter;
    int num;
    cout << "Enter only one character >> ";
    cin >> letter;
    cout << "this char in ASCII is equal >> " << int(letter) << endl;
    cout << "Enter number of char in ASCII >> ";
    cin >> num;
    cout << "this number in ASCII is equal >> " << char(num) << endl;
    cout << "--------------------------------------------\n";
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    // int num;
    int one,two,three;

    cout << "frist number : ";
    cin >> one;
    cout << "second number : ";
    cin >> two;
    cout << "third number : ";
    cin >> three;

    if(one>two && one>three){
        cout << one << " your Frist 1 number  is the biggest " << endl;
    }else if (two>three){
        cout << two << " your sec 2 number  is the biggest " << endl;
    }else{
        cout << three << " your third 3 number  is the biggest " << endl;
    }
    return 0;
}
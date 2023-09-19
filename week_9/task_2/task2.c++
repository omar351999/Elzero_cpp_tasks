#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30, 40};
    vector<int>::iterator frist = numbers.begin();
    vector<int>::iterator last = numbers.end()-1;
    cout << "________________________" << endl;
    cout << "First Element Is: " << numbers[0] << endl;
    cout << "First Element Is: " << numbers.at(0) << endl;
    cout << "First Element Is: " << *frist << endl;
    cout << "First Element Is: " << *numbers.begin() << endl;

    cout << "________________________" << endl;
    cout << "Last Element Is: " << numbers[3] << endl;
    cout << "Last Element Is: " << numbers.at(3) << endl;
    cout << "Last Element Is: " << *last << endl;
    cout << "Last Element Is: " << *(numbers.end()-1) << endl;
    cout << "________________________" << endl;

    return 0;
}
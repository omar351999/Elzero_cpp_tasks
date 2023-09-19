#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {100, 200, 300, 400};
    // vector<int>::iterator frist = vec.begin();
    // vector<int>::iterator last = vec.end() - 1;
    vector<int>::iterator iter;
    for (iter = vec.begin(); iter < vec.end(); iter++)
    {
        cout << *iter << endl;
    }
    cout << "________________________" << endl;
    for (int val : vec)
    {
        cout << val << endl;
    }
    cout << "________________________" << endl;
    vec.push_back(500);
    cout << "First Element Is: " << vec.at(0) << endl;
    cout << "Last Element Is: " << vec.at(4) << endl;
    return 0;
}
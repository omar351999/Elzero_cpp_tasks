#include <iostream>
using namespace std;

int main()
{
   //* Example 1
int vals[]{100, 200, 250, 400, 200};
int last =(sizeof(vals)/4)-1;
int middle =(sizeof(vals)/4)/2;
    (vals[0]+vals[last])>vals[middle]?
        cout << "First Number + Last Number Is Larger Than Middle Number\n"
        << vals[0]+vals[last]<<">" << vals[middle]:
    (vals[1]+vals[last-1])>vals[middle]?
        cout << "Second Number + Before Last Number Is Larger Than Middle Number\n"
        << vals[1]+vals[last-1]<<">" << vals[middle]:
        cout << "Middle Number Is The Largest\n"
        << vals[middle];


    return 0;
}

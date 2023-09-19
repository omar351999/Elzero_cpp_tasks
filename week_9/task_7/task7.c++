#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> numbers = {10, 20, 10, 40, 50};
  vector<int>::iterator iter = numbers.begin();
  cout << "______________________" << endl;
  //! 1
  for (vector<int>::iterator i = iter; i < numbers.end(); i++)
  {
    cout << *i << endl;
  }
  cout << "______________________" << endl;
  //! 2
  for (auto it = iter; it < numbers.end(); it++)
  {
    cout << *it << endl;
  }
  cout << "______________________" << endl;
  //! 3
  for (int it = 0; it < numbers.size(); it++)
  {
    cout << numbers[it] << endl;
  }
  cout << "______________________" << endl;
  return 0;
}
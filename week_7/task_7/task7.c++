#include <iostream>
using namespace std;

int main()
{
  for (int i = 2; i < 200; i *= 2)
  {
    cout << i << endl;
  }
  cout << "-----------------------" << endl;
  int i = 2;
  while (i < 200)
  {
    cout << i << endl;
    i *= 2;
  }
  return 0;
}
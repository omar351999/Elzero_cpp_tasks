#include <iostream>
using namespace std;

int num = 100;

/*
int read()
{
  int num = 50; //remove this line or change 50 to 100
  cout << num; 
  return 0;
}
*/

int read()
{
  cout << num; // swap between this line and the previous line 
  int num = 50; // previous line 
  return 0;
}

int play()
{
  int num = 200;
  read();
  return 0;
}

int main()
{
  play();
  return 0;
}
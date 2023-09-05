#include <iostream>
using namespace std;

// Write Your Function Here
/* //! frist solve by => for loop
  int beforeresult(int num,int rep){
    int op=0;
    for(int i=0;i<=rep;i++){
      op+=num-i;
    }
    return op;
}
*/
//! second solve by => recursion function
int beforeresult(int num,int rep){
  if(rep < 0){
    return 0;
  }
  return num + beforeresult(num-1,rep-1) ;
}

int main()
{
  cout << beforeresult(10, 5) << "\n"; // 10 + 9 + 8 + 7 + 6 + 5 = 45
  cout << beforeresult(15, 3) << "\n"; // 15 + 14 + 13 + 12 = 54
  return 0;
}
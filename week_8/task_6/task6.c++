#include <iostream>
using namespace std;

// Write Your Function Here
string swapping(string text){
    for(int i=0;i<size(text);i++){
        if(isupper(text[i])){
            text[i] = char(tolower(text[i]));
        }else{
            text[i] = char(toupper(text[i]));
        }
    }
    return text;
}

int main()
{
  cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
  return 0;
}
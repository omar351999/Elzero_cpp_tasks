#include <iostream>
#include <cmath>
using namespace std;

string swapOne(string name){
    for(int i =0;i<size(name);i++){
        if(name[i] < 97){
            name[i]= char(tolower(name[i]));
        }else{
            name[i]= char(toupper(name[i]));
        }
    }
    return name;
}
string swapTwo(string name){
    for(int i =0;i<size(name);i++){
        if(isupper(name[i])){
            name[i]= char(tolower(name[i]));
        }else{
            name[i]= char(toupper(name[i]));
        }
    }
    return name;
}
void rmspace(string name){
    for(int i =0;i<size(name);i++){
        if(isspace(name[i])){
            continue;
        }else{
            cout<< name[i];
        }
    }
}

int main()
{
    string name = "ELZEro";
    cout << swapOne(name)<<endl;
    cout << swapTwo(name) <<endl;
    rmspace("r  ms\tpat\nce");
    return 0;
}

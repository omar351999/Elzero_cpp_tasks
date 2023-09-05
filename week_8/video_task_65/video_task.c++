#include <iostream>
#include <algorithm>
using namespace std;

void print(int a,int b){
    cout <<"number one is " << a <<endl;
    cout <<"number two is " << b <<endl;
}
void print(double a,double b){
    cout <<"number one is " << a <<" ";
    cout <<"double size => " << sizeof(a) <<endl;
    cout <<"number one is " << b <<" ";
    cout <<"double size => " << sizeof(b) <<endl;
}
void print(float a){
    cout <<"float num is " << a <<" ";
    cout <<"float size => " << sizeof(a) <<endl;
}
void print(char a,char b){
    cout <<"char one is " << a <<endl;
    cout <<"char two is " << b <<endl;
}
void print(string a,string b){
    cout <<"str one is " << a <<endl;
    cout <<"str two is " << b <<endl;
}

int main()
{
    print(3,9);
    print(3.598);
    print(1.3,8.2);
    print('h','k');
    print("a","rzx");
    return 0;
}

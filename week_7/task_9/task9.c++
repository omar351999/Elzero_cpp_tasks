#include <iostream>
// #include <>
using namespace std;

int main()
{
    string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};
    for (int i = 0; i < size(friends); i++)
    {
        if(friends[i]=="Mohamed" || friends[i]=="Sayed"){
            cout << friends[i] << endl;

        }
    }
    cout << "-----------------------" << endl;
    int i = 0;
    while (i < i < size(friends))
    {
        if(friends[i]=="Mohamed" || friends[i]=="Sayed"){
            cout << friends[i] << endl;
        }
        i++;
    }

    return 0;
}
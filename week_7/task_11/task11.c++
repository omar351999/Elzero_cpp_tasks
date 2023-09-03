#include <array>
#include <iostream>
using namespace std;

int main()
{
    string friends[] = {"Ahmed", "Osama", "Ameer"};

    for (int i = 0; i < size(friends); i++)
    {
        cout << "=========" << endl;
        cout << "= " << friends[i] << " =" << endl;
        cout << "==================" << endl;
        cout << "= ";
        for (int j = 0; j < size(friends[i]); j++)
        {
            cout << friends[i][j];
            if(j<size(friends[i])-1){
                cout << ",";

            }
        }
        cout << " ="<<endl;
        cout << "==================" << endl;
    }
    cout << "-----------------------" << endl;
    
    return 0;
}
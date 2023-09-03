#include <iostream>
using namespace std;

int main()
{
    int start;
    int end;
    int reverse;

    cout << "start number: ";
    cin >> start;
    cout << "end number: ";
    cin >> end;
    if(start>end){
        reverse=start;
        start=end;
        end=reverse;
    }
    for(int i=start+1;i<end;i++){
        if(i%2==1){
            cout<<i;
        if(i<end-2){
            cout<<",";
        }
        }
    }
    // cout << start<<endl;
    // cout << end<<endl;
    return 0;
}
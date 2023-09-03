#include <iostream>
using namespace std;

int main()
{

    int i=1;
    while(i<120){
        if(i<10){
            cout <<"00"<<i<<endl;
        }
        else if (i<100)
        {
            cout <<"0"<<i<<endl;
        }
        else if (i>=100)
        {
            cout <<i<<endl;
        }
        
        i++;
    }   
    
    return 0;
}

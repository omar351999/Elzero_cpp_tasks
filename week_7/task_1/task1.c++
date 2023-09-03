#include <iostream>
using namespace std;

int main()
{
    //! for loop
    for(int i=0;i<11;i++){
        cout<<i<<endl;
    }
        cout<<"----------------"<<endl;
    //! while loop
    int i=0;
    int index=0;
    while (i<11){
        cout<<i<<endl;
        i++;
    }
        cout<<"++++++++++++++++++"<<endl;

    //! do while loop
    do{
        cout<<index<<endl;
        index++;
    } while (index<11);
    
    
    return 0;
}

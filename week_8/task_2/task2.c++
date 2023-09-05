#include <iostream>
using namespace std;

// Write Your Function Here
float money(float salary,int days){
    int weaks=days/7;
    int rest_days= days - weaks*7;
    int holiday= weaks*2;
    int work_days= days-holiday;
    float needed= salary / work_days ;

    cout << days  << " Days Has " << weaks << " Weeks"<<endl;
    cout << days  <<" Total = "<<weaks<<" * "<<"2"<<"= "<< holiday <<" Holidays From "<< days <<" Days"<<endl;
    cout << "You need for only one day $" ;
    return needed;
}
int main()
{
    cout << money(2015, 21) << "\n"; // 134.333
    cout << "-----------------" << "\n";
    cout << money(4500, 40) << "\n"; // 150
    return 0;
}
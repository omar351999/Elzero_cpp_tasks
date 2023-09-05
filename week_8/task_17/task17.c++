#include <iostream>
using namespace std;

// Write Your Function Here

int pricing(int allPhone, int oldPhone, int price, int tax)
{
    int num_new = allPhone - oldPhone;
    int oldPrice = price - 200;
    int totalmoney = num_new * price + oldPhone * oldPrice;
    int taxMoney = totalmoney * tax / 100;

    return totalmoney - taxMoney;
}
int main()
{
    cout << pricing(50, 10, 800, 20) << "\n"; // 30400
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    float teaPrice = 92.58;
    int roundedVal = (int)teaPrice;

    int quantity = 2;

    float total = teaPrice * quantity;
    int totalRounded = teaPrice * quantity;

    cout << "Total price - " ;
    cout << total << endl;
    cout << "Total base price - ";
    cout << totalRounded << endl;

    return 0;
}

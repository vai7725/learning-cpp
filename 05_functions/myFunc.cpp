#include <iostream>
using namespace std;

int main(){

    // lambda functions
    auto myFunc = [](int cups)
    {
        cout << "You have "<< cups <<" of tea";
    };

    myFunc(10);

    return 0;
}
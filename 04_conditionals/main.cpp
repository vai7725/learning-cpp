#include <iostream>
using namespace std;

int main(){
    int cups;

    double pricePerCup = 2.5, totalPrice, discount;

    cout << "Enter the number of cups";
    cin >> cups;

    totalPrice = pricePerCup * cups;

    if(cups > 20){
        discount = .20;
    }else if(cups >= 10 && cups <= 20){
        discount = .10;
    }else{
        discount = 0;
    }

    totalPrice -= (totalPrice * discount);

    cout << "The total price is: " << totalPrice;

    return 0;
}
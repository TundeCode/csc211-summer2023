// Write a program that calculates the sales tax (T) of some purchase of N dollars and
// returns the final cost to the buyer (N + T). You can assume that sales tax is 7.0%

#include <iostream>

int main(){

     int n;
     double tax;

    std::cin >> n;

    tax = 0.07;

    n += tax * n; // n = n + (tax * n)

    std::cout << "total amount to pay == " << n;

    return 0;
}


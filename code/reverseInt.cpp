// Given some 4 digit number (4321), write a program that prints 
// out each individual digit from right to left (1 , 2, 3, 4).

#include <iostream>

int main(){

    int n = 4321;

    std::cout << n % 10 << " , ";
    n /= 10; // n = n / 10;
    std::cout << n % 10  << " , ";
    n /= 10; // n = n / 10;
    std::cout << n % 10  << " , ";
    n /= 10; // n = n / 10;
    std::cout << n % 10;
    n /= 10; // n = n / 10;



    return 0;
}
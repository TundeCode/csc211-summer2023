#include <iostream>

// Write a program in C++ (on paper) that:
// reads the number of hours
// calculates payment:
// if number of hours no greater than 40, payment is calculated using the regular hourly rate of $35
// if overtime, payment is calculated using the regular hourly rate for the first 40 hours and the special rate of $50 
// for the remaining hours
// prints the calculated payment

int main(){

    int hours, pay;
    std::cin >> hours;

    if(hours <= 40){
        pay = hours * 35;
    }
    else{

        int flatpay = 40 * 35;
        int overtimeHours =  hours - 40;

        int overtimePay = overtimeHours * 50;
        pay = flatpay + overtimePay;

    }

    std::cout << "My pay for this week is: " << pay;


    return 0;
}
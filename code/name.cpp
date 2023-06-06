#include <iostream>


//  Write a program that asks the user for their name and greets them with their name.

int main(){

    std::string name;

    std::cout << "Enter your name: " << std::endl;

    std::getline (std::cin,name);

    std::cout << "Hello " << name << " have a good day.";

    

    return 0;
}
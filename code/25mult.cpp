#include <iostream>

// 25 mults of 3  ~ calcu average

int main(){

    int multiple = 0, sum = 0;

    for(int i = 0 ; i < 25; i++){

        multiple += 3; // 

        sum += multiple;

    }

    std::cout << sum / 25;



    return 0;
}
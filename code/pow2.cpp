#include <iostream>

//Write a single while loop to print the powers of two from 2^0 to 2^16. NO CMATH import

int main(){

    // 1, 2, 4, 8, 16, 32, 64 , 128

    int i = 0, num = 0;

    while( i <= 16){

        if(num == 0){
            std::cout << 1 << std::endl;
            num++;
        }
        else{

        num *= 2; // num = num * 2
        i++;

        std::cout << num << std::endl;
        }

    }

    

    return 0;
}


#include <iostream>

int main(){

    int val = 0, sum = 0;

    for(int i = 0; i < 25; i++){

        val +=3;
        sum += val;
        
    }

    std::cout << sum / 25;


    return 0;
}
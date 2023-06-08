#include <iostream>

bool isPrime(int n){

    for(int i = 2 ; i < (n - 1); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;

}

int highestPrime(int n){

    for(int i = n; i > 0; i-- ){
        if(isPrime(i)){
            return i;
        }
    }

    return 1;
}

int main(){

    int val;

    std::cin >> val;

    
    std::cout << highestPrime(val);

    return 0;
}
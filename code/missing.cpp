#include <iostream>
#include <vector>

bool isInVectors(std::vector<int> someVect, int someInt){
    bool isPresent = false;
    for(int i = 0; i < someVect.size(); i++){
        if(someVect[i] == someInt){
            isPresent = true;
            break;
        }
    }

    return isPresent;
}

int main(){

    int n, input;
    std::vector<int> recitedNumbers;

    std::cin >> n;

    for(int i =0 ; i < n; i++){
        std::cin >> input;
        recitedNumbers.push_back(input);
    }

    // for(int i = 0 ; i < recitedNumbers.size(); i++){
    //     std::cout << "collected numvers = " << recitedNumbers[i] << std::endl;
    // }

    int lastNumber = recitedNumbers[n - 1];

    bool perfect = true;

    for(int i = 1; i <= lastNumber; i++){
        if(isInVectors(recitedNumbers, i)){
            continue;
        }
        else{
            std::cout << i << std::endl;
            perfect = false;
        }
    }

    if(perfect){
        std::cout << "good job";
    }




    return 0;
}
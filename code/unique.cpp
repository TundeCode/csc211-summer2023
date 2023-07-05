#include <iostream>
#include <vector>

bool isUniqueNumber(std::vector<int> someVector, int someNum){
    bool unique = true;
    for(int i = 0 ; i < someVector.size(); i++){
        if(someVector[i] == someNum){
            unique = false;
        }
    }

    return unique;

}

int main(){

    std::vector<int> inputs;
    std::vector<int> uniqueValues;
    int someInput;

    for(int i = 0; i < 10; i++){
        std::cin >> someInput;
        inputs.push_back(someInput);

    }

    for(int i = 0; i < inputs.size(); i++){

        if(isUniqueNumber(uniqueValues, inputs.at(i) % 42 )){
            uniqueValues.push_back(inputs.at(i) % 42);
            continue;
        }
    }

    std::cout << uniqueValues.size();



}
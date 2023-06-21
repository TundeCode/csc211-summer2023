// Write a program that reads in the value of n, and prints the identity matrix of size n x n?
// e.g = 3 x 3 identity matrix:
// 1 0 0
// 0 1 0
// 0 0 1

#include <iostream>

int main(){

    int n;
    std::cin >> n;

    int matrix[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                matrix[i][j] = 1;
            }
            else{
                matrix[i][j] = 0;
            }
        }
    }

    std::cout << matrix;

    return 0;
}
#include <iostream>

void reverseArray(int a[], int n){

    int tail = n - 1;

    int head;

    for(int i = 0; i < n / 2; i++){

        head = a[i];
        a[i] = a[tail];
        a[tail] = head;
        tail--;


    }


}

int main(){

    int array[] = {1,2,3,4};

    int n = 4;

    for(int i = 0; i < n; i++){
        std::cout << array[i] << " ";
    }

    reverseArray(array, n);

    std::cout << std::endl;

    for(int i = 0; i < n; i++){
        std::cout << array[i] << " ";
    }

    return 0;
}
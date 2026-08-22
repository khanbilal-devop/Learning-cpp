//
// Created by Khan Ahmed on 8/22/26.
//


#include <iostream>
#include <ostream>

int square(int x) {
    return x * x;
}


// Take pointers as arguments
void swap(int* x , int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}


// Takes argument by reference
void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    //
    // float f = 20.01;
    // float* pF = &f;
    // std::cout << *pF << std::endl;


    // int a = 5;

    // std::cout << square(a) << std::endl;
    // std::cout << a << std::endl;
    // std::cout << "Squaring of a does nto chaneg he value isnide a becuase "
    //              "the refernece is not pass ratehr the value is apssed to the function" << std::endl;

    int num1 = 5;
    int num2 = 10;
    // Let us swap this via a fucntion
    swap(num1, num2);
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << "observed values after swap" << std::endl;


}
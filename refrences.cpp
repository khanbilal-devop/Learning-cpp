//
// Created by Khan Ahmed on 8/13/26.
//


#include <iostream>
#include <ostream>
#include <vector>

int main () {

    std::vector<int> numbers = {1,2,3,4};


    // This does no change the actual number as here the variable number carries a copy fo the original data.
    for (auto number : numbers) {
        number = 7;
    }

    // This does  change the actual number as here the variable number is a refernece of the actual numbe relemnt
    for (auto& number : numbers) {
        number = 7;
    }

    for (auto number : numbers) {
        std::cout << number << std::endl;
    }
}

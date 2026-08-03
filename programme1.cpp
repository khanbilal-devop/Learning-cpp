//
// Created by Khan Ahmed on 8/2/26.
//

#include <iostream>
#include <string>

int main () {
    std::string name;
    std::cout << "Hi there please type your name : " << std::flush;
    std::cin >> name;

    std::cout << "Your name is " << name << std::endl;
    return 0;
}
//
// Created by Khan Ahmed on 8/6/26.
//


#include <iostream>
#include <ostream>

int main() {
    const size_t size_of_array = 4;
    int enemies_level[size_of_array];
    float levels_off_difficulty[] = {1.0,2.5,3.0,5.0};

    enemies_level[0] = 10;
    enemies_level[1] = 15;
    enemies_level[2] = 20;
    enemies_level[3] = 25;

    std::cout << "Different enemies level" << std::endl;
    std::cout << enemies_level[0] << std::endl;
    std::cout << enemies_level[1] << std::endl;
    std::cout << enemies_level[2] << std::endl;
    std::cout << enemies_level[3] << std::endl;

    std::cout << "level of difficulty" << std::endl;
    std::cout << levels_off_difficulty[0] << std::endl;
    std::cout << levels_off_difficulty[1] << std::endl;
    std::cout << levels_off_difficulty[2] << std::endl;
    std::cout << levels_off_difficulty[3] << std::endl;

}

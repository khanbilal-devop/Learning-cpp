//
// Created by Khan Ahmed on 8/13/26.
//


#include <iostream>
#include <ostream>
#include <vector>

int main() {

    std::vector<std::string> checkpoints = {"start","Forest", "Castle"};

    std::cout << "The size of the checkpoitns are " << checkpoints.size() << std::endl << "\n";

    std::cout << "Different checkopints are :" << std::endl;
    for (std::string s : checkpoints) {
        std::cout << s << std::endl;
    }
    std::cout << "\n";

    checkpoints[2] = "Black Castle";

    std::cout << "The Updated castle is " << checkpoints[2] << std::endl;
}

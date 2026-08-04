//
// Created by Khan Ahmed on 8/4/26.
//


#include <iostream>
#include <ostream>
#include <string>


enum class user_role {pro,noob,npc,begineer};

struct player {
    std::string name;
    std::string level;
    user_role role;
};

int main() {

    player p;
    p.role = user_role::noob;
    p.level = "new";
    p.name = "john";

    std::cout << p.name << std::endl;
    std::cout << (int) p.role << std::endl;
    std::cout << p.level << std::endl;
    return 0;
}
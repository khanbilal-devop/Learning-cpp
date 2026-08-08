//
// Created by Khan Ahmed on 8/7/26.
//


#include <iostream>
#include <ostream>
#include <string>

class Player {

public:
       std::string name;
       int health;

    Player(std::string n, int h):name(n), health(h) {}

    void takeDamage(int damage) {
        health -= damage;
    }

    ~Player() { std::cout << "Player destroyed\n"; }
};


int main() {
    Player* player = new Player("player1", 100);
    player->takeDamage(10);

    std::cout << player->health << std::endl;
    std::cout << player->name << std::endl;

    // This frees up the space in heap and called destructor of the ibejct
    delete player;
    player = nullptr;

    // This should print zero assuring that the pointer no longer points to any other memory address.

    std::cout << player << std::endl;
}

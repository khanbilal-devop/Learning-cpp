//
// Created by Khan Ahmed on 8/6/26.
//


#include <iostream>
#include <ostream>


// Passing a pointer lets a function modify the caller's variable.
void addAmmo(int32_t* ammo, int amount) {
    if (ammo == nullptr) return;   // always check before dereferencing
    *ammo += amount;               // '*' here means "the value at that address"
}

int main() {

    int health = 100;
    int* pHealth = &health;

    std::cout << "health  = " << health  << '\n';   // 100
    std::cout << "&health = " << &health << '\n';   // its address
    std::cout << "pHealth = " << pHealth << '\n';   // same address
    std::cout << "*pHealth= " << *pHealth << "\n\n"; // 100

    *pHealth = 75;
    std::cout << "after *pHealth = 75, health = " << health << "\n\n";

    struct Big { double v[1000]; };
    std::cout << "sizeof(int)    = " << sizeof(int)    << '\n';
    std::cout << "sizeof(int*)   = " << sizeof(int*)   << '\n';
    std::cout << "sizeof(Big)    = " << sizeof(Big)    << '\n';
    std::cout << "sizeof(Big*)   = " << sizeof(Big*)   << "\n\n";

    int* pNothing = nullptr;
    if (pNothing == nullptr) {
        std::cout << "pNothing is null - not safe to dereference\n\n";
    }

    int32_t ammo = 200;
    addAmmo(&ammo, 150);           // hand over the address, not a copy
    addAmmo(nullptr, 999);         // safely ignored by the null check
    std::cout << "ammo = " << ammo << "\n\n";   // 350

    int scores[5] = {10, 20, 30, 40, 50};
    int* p = scores;

    for (int i = 0; i < 5; ++i) {
        // these two lines are equivalent
        std::cout << scores[i] << " == " << *(p + i) << '\n';
    }
    // p + 1 moves forward by sizeof(int) bytes, not 1 byte.
    std::cout << '\n';

    return 0;
}

//
// Created by Khan Ahmed on 8/6/26.
//

#include <iostream>
#include <cstdint>

#define  MAX_AMMO  500
#define  DEBUG

int main(){
    int32_t ammo = MAX_AMMO/5 ;
    uint8_t health_items = 5;


#ifdef DEBUG
    std::cout << "Start debugging" << std::endl;
#endif


    ammo += 200; // Player finds extra ammo
    health_items -= 2; // Player uses some health items

    std::cout << "Final Ammo: " << ammo << std::endl;
    std::cout << "Remaining Health Items: " <<  health_items << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
#undef MAX_AMMO
}



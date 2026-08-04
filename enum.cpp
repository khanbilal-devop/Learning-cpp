//
// Created by Khan Ahmed on 8/4/26.
//


#include <iostream>


// Error
// enum old_asset_type { texture, sound, animation, script };
// enum old_menu_section { background, music, sound, controls, texture };

enum class AssetType { texture, sound, animation, script };
enum class MenuSection { background, music, sound, controls, texture };

int main() {
    AssetType my_asset = AssetType::sound;
    MenuSection my_menu = MenuSection::sound;

    int sound = 8;

    std::cout << "AssetType::sound is encoded as: "
              << static_cast<int>(my_asset) << "\n";

    std::cout << "MenuSection::sound is encoded as: "
              << static_cast<int>(my_menu) << "\n";

    std::cout << "The local integer 'sound' is: "
              << sound << "\n";

    return 0;
}
#include "menu.hpp"
#include <iostream>

Menu::Menu(){
    options.push_back("Print Current Options");
    options.push_back("Exit");
}

void Menu::print(){
    for(int i = 0; i < options.size(); i++){
        std::cout << i << ": " << options[i] << std::endl;
    }
}

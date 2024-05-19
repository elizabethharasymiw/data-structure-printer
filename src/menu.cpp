#include "menu.hpp"
#include <iostream>

void Menu::print(){
    for(int i = 0; i < options.size(); i++){
        std::cout << i << ": " << options[i] << std::endl;
    }
}

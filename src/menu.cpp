#include "menu.hpp"
#include <iostream>

ListMenu::ListMenu(){
    options.push_back("Print Current Options");
    options.push_back("Exit");
}

void ListMenu::print(){
    for(int i = 0; i < options.size(); i++){
        std::cout << i << ": " << options[i] << std::endl;
    }
}

void ListMenu::menuLoop(int num){
    ListMenu::print();
    std::cout << "Entered List MenuLoop" << std::endl;
}

TreeMenu::TreeMenu(){
    options.push_back("Print Current Options");
    options.push_back("Exit");
}

void TreeMenu::print(){
    for(int i = 0; i < options.size(); i++){
        std::cout << i << ": " << options[i] << std::endl;
    }
}

void TreeMenu::menuLoop(int num){
    TreeMenu::print();
    std::cout << "Entered Tree MenuLoop" << std::endl;
}

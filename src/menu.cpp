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

    while(num != 1){
        if(num == 0){
            ListMenu::print();
        }
        std::cin >> num;
    }

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

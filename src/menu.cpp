#include "menu.hpp"
#include <limits>
#include <iostream>

int getIntFromUser(){
    int userInput;

    std::cout << "Please enter a menu option number:";
    std::cin >> userInput;

    while(std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cin >> userInput;
    }

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

    return userInput;
}

ListMenu::ListMenu(){
    options.push_back("Exit");
    options.push_back("Print Current Options");
}

void ListMenu::print(){
    for(int i = 0; i < options.size(); i++){
        std::cout << i << ": " << options[i] << std::endl;
    }
}

void ListMenu::menuLoop(int num){
    ListMenu::print();
    std::cout << "Entered List MenuLoop" << std::endl;

    int userInput;

    userInput = getIntFromUser();

    while(userInput != 0){
        if(num == 1){
            ListMenu::print();
        }
        userInput = getIntFromUser();
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

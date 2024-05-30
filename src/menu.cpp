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

void clearScreen(){
    std::cout << "\033[H\033[2J" << std::endl;
}

ListMenu::ListMenu(){
    options.push_back("Exit");
    options.push_back("???");
}

void ListMenu::print(){
    for(int i = 0; i < options.size(); i++){
        std::cout << i << ": " << options[i] << std::endl;
    }
}

void ListMenu::menuLoop(int num){
    std::cout << std::endl;
    ListMenu::print();
    std::cout << std::endl;

    int userInput;

    userInput = getIntFromUser();

    while(userInput != 0){
        std::cout << std::endl;
        ListMenu::print();
        std::cout << std::endl;

        userInput = getIntFromUser();
    }
}

TreeMenu::TreeMenu(){
    options.push_back("Exit");
    options.push_back("???");
}

void TreeMenu::print(){
    for(int i = 0; i < options.size(); i++){
        std::cout << i << ": " << options[i] << std::endl;
    }
}

void TreeMenu::menuLoop(int num){
    std::cout << std::endl;
    TreeMenu::print();
    std::cout << std::endl;
}

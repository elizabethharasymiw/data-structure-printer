#include <iostream>

#include "list.hpp"
#include "tree.hpp"
#include "menu.hpp"

enum mainMenu { EXIT, TREE, LIST, COUNT };

// Print all the current options of the program
void printMenu() {
    std::cout << "Your current options are: \n";
    std::cout << "0: Exit" << std::endl;
    std::cout << "1: Tree\n";
    std::cout << "2: List" << std::endl;
}

// TODO: Will be needed for Tree Menu later
void printExampleTreeArrayFormat() {}

// Valid UserInput to make sure we do not use dangerous user input
int checkUserInput(std::string userInput) {
    for (int i = 0; i < mainMenu::COUNT; i++) {
        std::string numString = std::to_string(i);
        if (numString == userInput) {
            return i; // Found a valid option
        }
    }

    return -1; // Error invalid input case
}

int main(int argc, char *argv[]) {

    ListMenu myListMenu{};
    TreeMenu myTreeMenu{};

    int currentState = -1;

    std::string userInput;

    std::cout << std::endl;
    std::cout << "Welcome to Data Structure Printer\n";
    std::cout << std::endl;

    while (currentState != EXIT) {

        printMenu();
        std::cout << std::endl;

        std::cout << "Please enter a menu option number:";
        std::cin >> userInput;

        currentState = checkUserInput(userInput);

        switch (currentState) {
        case mainMenu::TREE:
            myTreeMenu.menuLoop(0);
            break;
        case mainMenu::LIST:
            myListMenu.menuLoop(0);
            break;
        case mainMenu::EXIT:
            currentState = EXIT;
            break;
        default:
            std::cout << "Please try again, that was not a valid option"
                      << std::endl;
            break;
        }
    }

    return 0;
}

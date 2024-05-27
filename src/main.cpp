#include <iostream>

#include "list.hpp"
#include "tree.hpp"
#include "menu.hpp"

enum mainMenu { EXIT, MENU, TREE, LIST, COUNT };

// Print all the current options of the program
void printMenu() {
    std::cout << "Your current options are: \n";
    std::cout << "0: Exit" << std::endl;
    std::cout << "1: Print current menu options\n";
    std::cout << "2: Tree\n";
    std::cout << "3: List" << std::endl;
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

    int currentState = MENU;

    std::string userInput;

    std::cout << "Welcome to Data Structure Printer\n";
    std::cout << "For help type: 1" << std::endl;

    while (currentState != EXIT) {

        std::cin >> userInput;

        currentState = checkUserInput(userInput);

        switch (currentState) {
        case mainMenu::MENU:
            printMenu();
            break;
        case mainMenu::TREE:
            std::cout << "Entered Tree Menu" << std::endl;
            myTreeMenu.menuLoop(0);
            std::cout << "Returned to Main Menu" << std::endl;
            break;
        case mainMenu::LIST:
            std::cout << "Entered List Menu" << std::endl;
            myListMenu.menuLoop(0);
            std::cout << "Returned to Main Menu" << std::endl;
            break;
        case mainMenu::EXIT:
            std::cout << "Entered Exit Mode" << std::endl;
            std::cout << "Returned to Main Menu" << std::endl;
            currentState = EXIT;
            break;
        default:
            std::cout << "Please try again, that was not a valid option"
                      << std::endl;
            std::cout << "For help type: 0" << std::endl;
            break;
        }
    }

    return 0;
}

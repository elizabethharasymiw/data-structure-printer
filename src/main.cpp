#include <iostream>

#include "list.hpp"
#include "tree.hpp"
#include "menu.hpp"

enum mainMenu { MENU, TREE, LIST, EXIT, COUNT };

// Print all the current options of the program
void printMenu() {
    std::cout << "Your current options are: \n";
    std::cout << "0: Print current menu options\n";
    std::cout << "1: Tree\n";
    std::cout << "2: List\n";
    std::cout << "3: Exit" << std::endl;
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
    std::cout << "For help type: 0" << std::endl;

    while (currentState != EXIT) {

        std::cin >> userInput;

        currentState = checkUserInput(userInput);

        switch (currentState) {
        case mainMenu::MENU:
            printMenu();
            break;
        case mainMenu::TREE:
            std::cout << "Entered Tree Menu" << std::endl;
            myTreeMenu.menuLoop();
            std::cout << "Returned to Main Menu" << std::endl;
            break;
        case mainMenu::LIST:
            std::cout << "Entered List Menu" << std::endl;
            myListMenu.menuLoop();
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

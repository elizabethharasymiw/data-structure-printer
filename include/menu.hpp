#ifndef MENU_HEADER_FILE_HPP
#define MENU_HEADER_FILE_HPP

#include <string>
#include <vector>

class Menu{
private:
    std::vector<std::string> options;
public:
    Menu();
    ~Menu(){};
    void print();
};

#endif // MENU_HEADER_FILE_HPP

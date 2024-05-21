#ifndef MENU_HEADER_FILE_HPP
#define MENU_HEADER_FILE_HPP

#include <string>
#include <vector>

class Menu{
private:
    std::vector<std::string> options;
public:
    Menu(){};
    virtual ~Menu(){};
    virtual void print(){};
};

class ListMenu : public Menu{
private:
    std::vector<std::string> options;
public:
    ListMenu();
    ~ListMenu() override {};
    void print() override;
};

#endif // MENU_HEADER_FILE_HPP

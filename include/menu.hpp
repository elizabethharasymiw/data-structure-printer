#ifndef MENU_HEADER_FILE_HPP
#define MENU_HEADER_FILE_HPP

#include <string>
#include <vector>

int getUserInput();
void clearScreen();

class Menu{
private:
    std::vector<std::string> options;
public:
    Menu(){};
    virtual ~Menu(){};
    virtual void print(){};
    virtual void menuLoop(int num){};
};

class ListMenu : public Menu{
private:
    std::vector<std::string> options;
public:
    ListMenu();
    ~ListMenu() override {};
    void print() override;
    void menuLoop(int num) override;
};

class TreeMenu : public Menu{
private:
    std::vector<std::string> options;
public:
    TreeMenu();
    ~TreeMenu() override {};
    void print() override;
    void menuLoop(int num) override;
};

#endif // MENU_HEADER_FILE_HPP

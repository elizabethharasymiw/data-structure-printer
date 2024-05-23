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
    virtual void menuLoop(){};
};

class ListMenu : public Menu{
private:
    std::vector<std::string> options;
public:
    ListMenu();
    ~ListMenu() override {};
    void print() override;
    void menuLoop() override;
};

class TreeMenu : public Menu{
private:
    std::vector<std::string> options;
public:
    TreeMenu();
    ~TreeMenu() override {};
    void print() override;
    void menuLoop() override;
};

#endif // MENU_HEADER_FILE_HPP

#ifndef SINGLE_SNAKEABILITY_MENU_H
#define SINGLE_SNAKEABILITY_MENU_H
#include <iostream>
#include <string>


class Menu
{
public:
    Menu();



    void menuLoop();


    void showMenu();


    int handleInput();


    void callLevelLoader();


    void startGame(int levelNum);

private:
    bool menuMode;
};


#endif //SINGLE_SNAKEABILITY_MENU_H
#ifndef SINGLE_SNAKEABILITY_MENU_H
#define SINGLE_SNAKEABILITY_MENU_H


class Menu
{
public:
    Menu();

    //menu loop

    void menuLoop();

    //show menu
    void showMenu();

    //get user input
    void handleInput();

    //use level loader
    void loadLevel();

    // return choice to gamemanager
    int startGame(int levelNum);

};


#endif //SINGLE_SNAKEABILITY_MENU_H
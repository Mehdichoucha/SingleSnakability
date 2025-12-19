#include "Menu.hpp"


Menu::Menu() {
    menuMode = true;
}

void Menu::menuLoop() {
    while (menuMode == true) {
        showMenu();
        if (handleInput() != 0) {
            startGame(handleInput());
            menuMode = false;
        }
    }

}


void Menu::showMenu() {
    system("cls");
    std::string start = "1 → Start Game";
    std::string quit = "2 → Quit";
    std::string instruct = "Please type a number to select";

    std::cout<<start<<std::endl;
    std::cout<<quit<<std::endl;
    std::cout<<instruct<<std::endl;

}


int Menu::handleInput() {
    int choice{0};
    std::cin>>choice;
    if (choice != 1 || choice !=2) {
        std::cerr<<"Please choose 1 or 2"<<std::endl;
        choice = 0;
    }

    return choice;


}


void Menu::callLevelLoader() {


}


void Menu::startGame(int levelNum) {


}
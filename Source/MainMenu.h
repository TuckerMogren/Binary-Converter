/*
* Class header written by Tucker Mogren on 12/30/17
* Class header will hold the function deffs
* For the mainmenu
*/

#ifndef MainMenu_h
#define MainMenu_h
#include "Conversion.h"
#include <iostream>

class MainMenu : protected Conversion
{
private:
    char GetMenuPick();
    void MenuFunctions(char);
public:
    void run();
    MainMenu();
    ~MainMenu();

private:
    int num;
    std::string binNum;
    char userChoice;

};

#endif  /*MainMenu_h*/

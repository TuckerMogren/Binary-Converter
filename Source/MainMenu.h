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
    void run();
    char GetMenuPick();
    void MenuFunctions(char);
public:
    void setChoice(char);
    MainMenu();
    ~MainMenu();

};

#endif  /*MainMenu_h*/

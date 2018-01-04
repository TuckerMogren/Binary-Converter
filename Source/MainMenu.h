/*
* Class header written by Tucker Mogren on 12/30/17
* Class header will hold the function deffs
* For the mainmenu
*/

#ifndef MainMenu_h
#define MainMenu_h


#include "Operations.h"

class MainMenu : protected Operations
{
protected:
    char GetMenuPick();
    void MenuFunctions(char);
    int menuQuit();
    void clearMenu();
public:
    void run();
    MainMenu();
    ~MainMenu();

private:
    char userChoice;



};

#endif  /*MainMenu_h*/

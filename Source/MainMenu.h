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
    void menubinaryConvert();
    void menudecimalConvert();
    void menuaddNumbers();
    void menusubNumbers();
    void menudivideNumber();
    void menumultipleNumber();
    void menumodNumber();
    int menuQuit();
    void clearMenu();
public:
    void run();
    MainMenu();
    ~MainMenu();

private:
    char userChoice;
    std::string binnumberOne;
    std::string binnumberTwo;
    std::string binResult;
    int userenternum1;
    int userenternum2;
    int intResult;
    

};

#endif  /*MainMenu_h*/

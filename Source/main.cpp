/*
* Include the directive iostream
* Included Conversions.h for the conversions class
*/
#include <iostream>
#include "MainMenu.h"
/*
* Main Function
* Written by Tucker Mogren, 12/16/17
* IDE: Code::Blocks 16.02 AND Xcode 9.2
* Language: C++
*/
int main()
{
    MainMenu *mainmenu = new MainMenu();
    mainmenu->run();
    delete mainmenu;
    return 0;
}








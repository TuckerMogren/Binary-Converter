#ifndef MainMenu_hpp
#define MainMenu_hpp

#include "Conversion.h"
#include <iostream>

class MainMenu : protected Conversion
{
private:
    char GetMenuPick();
    void MenuFunctions(char);
public:
    MainMenu();
    ~MainMenu();

};

#endif /* MainMenu_hpp */

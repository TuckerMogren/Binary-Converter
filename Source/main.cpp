/*
* Include the directive iostream
* Included Conversions.h for the conversions class
*/
#include <iostream>
#include <exception>
#include "MainMenu.h"
#include "FileIO.h"
/*
* Main Function
* Written by Tucker Mogren, 12/16/17
* IDE: Code::Blocks 16.02 AND Xcode 9.2
* Language: C++
*/
int main()
{

    MainMenu *mainmenu = nullptr;
    FileIO *file = nullptr;

    try
    {
        mainmenu = new MainMenu();
        file = new FileIO("File.txt");
    }
    catch (std::exception &e)
    {
        std::cerr << "ERROR: could not construct objects!" << e.what() << std::endl;
    }

    mainmenu->run();

    delete mainmenu;
    delete file;
    return 0;
}








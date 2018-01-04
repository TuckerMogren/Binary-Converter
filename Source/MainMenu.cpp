/*
* Class written by Tucker Mogren on 12/30/17
* Class header will hold the function deffs
* For the mainmenu
*/
#include "MainMenu.h"
#include "Operations.h"
#include <string>
#include <iostream>
/*
* Class Constructor
* Inits the binNum, num, and userChoice vars
*/
MainMenu::MainMenu()
{

    userChoice = 'X';

}
/*
* Class destructor
* Does nothing, Used to delete the pointer
*/
MainMenu::~MainMenu()
{

}
/*
* Function run()
* Void, returns nothing
* will allow for the protected class
* functions to be ran from main.cpp
*/
void MainMenu::run()
{

    userChoice = GetMenuPick();
    MenuFunctions(userChoice);
}
/*
 * Function clearMenu()
 * Void, returns nothing
 * Will allow for the terminal to be "cleared"
 */
void MainMenu::clearMenu()
{
    std::cout << "****************************************************" << std::endl;
}
/*
 * Function GetMenuPick
 * Gets a single char from the user (Upper or Lower case)
 * Continue to prompt until a valid character is entered
 * Will return the character and program will perform option based on that.
 */
char MainMenu::GetMenuPick()
{

    std::cout << "Enter 'A' to add two binary numbers," << std::endl;
    std::cout << "Enter 'B' to convert from bianry to decimal," << std::endl;
    std::cout << "Enter 'C' to convert from decimal to binary," << std::endl;
    std::cout << "Enter 'D' to divide two binary numbers," << std::endl;
    std::cout << "Enter 'M' to multiple two binary numbers," << std::endl;
    std::cout << "Enter 'S' to subtract two binary numbers," << std::endl;
    std::cout << "Enter '%' to find the remainder between two binary numbers," << std::endl;
    std::cout << "Enter 'Q' to quit the program." << std::endl;
    std::cout << "\nPlease enter a character to perform an operation: ";
    std::cin >> userChoice;
    userChoice = std::toupper(userChoice);
    while (userChoice != 'A' && userChoice != 'S' && userChoice != 'D' && userChoice != 'M' && userChoice != '%' && userChoice != 'B' && userChoice != 'C' && userChoice != 'P' && userChoice != 'Q')
    {
        std::cout << "Wrong value entered, please try again" << std::endl;
        GetMenuPick();
    }


    return userChoice;

}
/*
 * Function MenuFunctions
 * Will take a char which is the options the user wants to perform.
 * Will activate and run the function that was being called upon
 */
void MainMenu::MenuFunctions(char entry)
{
    switch(entry)
    {
        case 'A':
            menuaddNumbers();
            clearMenu();
            run();
            break;
        case 'B':
            menudecimalConvert();
            clearMenu();
            run();
            break;
        case 'C':
            menubinaryConvert();
            clearMenu();
            run();
            break;
        case 'S':
            menusubNumbers();
            clearMenu();
            run();
            break;
        case 'M':
            menumultipleNumber();
            clearMenu();
            run();
            break;
        case 'D':
            menudivideNumber();
            clearMenu();
            run();
        case '%':
            menumodNumber();
            clearMenu();
            run();
        case 'Q':
            menuQuit();
            break;
    }
}

/*
 * Function menuQuit()
 * Returns int (0), takes nothing
 * Will terminate the program
 */
int MainMenu::menuQuit()
{
    std::cout << "\nThank you for using my program." << std::endl;
    std::cout << "Good-Bye!"  << std::endl;
    return 0;
}


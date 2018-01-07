/*
* Class written by Tucker Mogren on 12/30/17
* Class header will hold the function deffs
* For the mainmenu
*/
#include "MainMenu.h"
#include "MenuOperations.h"
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

    std::cout << "Enter '+' to add two binary numbers," << std::endl;
    std::cout << "Enter 'B' to convert from binary to decimal," << std::endl;
    std::cout << "Enter 'C' to convert from decimal to binary," << std::endl;
    std::cout << "Enter '/' to divide two binary numbers," << std::endl;
    std::cout << "Enter '*' to multiple two binary numbers," << std::endl;
    std::cout << "Enter '-' to subtract two binary numbers," << std::endl;
    std::cout << "Enter '%' to find the remainder between two binary numbers," << std::endl;
    std::cout << "Enter 'Q' to quit the program." << std::endl;
    std::cout << "\nPlease enter a character to perform an operation: ";
    std::cin >> userChoice;



    userChoice = std::toupper(userChoice);
    //Below array is for use maybe later
    //char acceptedValues[9] = {'+','-','/','*','%','B','C','P','Q'};



    while (userChoice != '+' && userChoice != '-' && userChoice != '/' && userChoice != '*' && userChoice != '%'
           && userChoice != 'B' && userChoice != 'C' && userChoice != 'Q')
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
        case '+':
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
        case '-':
            menusubNumbers();
            clearMenu();
            run();
            break;
        case '*':
            menumultipleNumber();
            clearMenu();
            run();
            break;
        case '/':
            menudivideNumber();
            clearMenu();
            run();
        case '%':
            menumodNumber();
            clearMenu();
            run();
        case 'P':
            //process file function goes here
            clearMenu();
            run();
        case 'Q':
            menuQuit();
            break;
        default:
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


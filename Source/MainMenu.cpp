/*
* Class written by Tucker Mogren on 12/30/17
* Class header will hold the function deffs
* For the mainmenu
*/


#include "MainMenu.h"
/*
* Class Constructor
* Inits the binNum, num, and userChoice vars
*/
MainMenu::MainMenu()
{

    binNum = "1111111";
    num = 255;
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
 * Function GetMenuPick
 * Gets a single char from the user (Upper or Lower case)
 * Continue to prompt until a valid character is entered
 * Will return the character and program will perform option based on that.
 */
char MainMenu::GetMenuPick()
{

    std::cout << "Please enter a character to perform an operation: ";
    std::cin >> userChoice;
    userChoice = std::toupper(userChoice);
    while (userChoice != '+' && userChoice != '-' && userChoice != '/' && userChoice != '*' && userChoice != '%' && userChoice != 'B' && userChoice != 'C' && userChoice != 'P' && userChoice != 'Q')
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
        case 'C':
            menubinaryConvert();
            break;

        case 'B':
            menudecimalConvert();
            break;
    }
}
/*
 * Function menubinaryConvert
 * Takes nothing, returns nothing
 * Will ask for a decimal number and will return
 * The string equivalent in binary form and display it.
 */
void MainMenu::menubinaryConvert()
{
    std::cout << "Enter a decimal Number to convert: ";
    std::cin >> num;
    binNum = ConvertFromDecimal(num);
    std::cout << binNum << std::endl;
}
/* Function menudecimalConvert
 * Takes nothing, returns nothing
 * Will ask for a binary string and
 * will convert the string to
 * Its decimal number equivalent and display the value.
 */
void MainMenu::menudecimalConvert()
{
    std::string binNum;
    std::cout << "Please enter a binary Number to convert: ";
    std::cin >> binNum;
    num = ConvertFromBinary(binNum);
    std::cout << num << std::endl;
}

/*
* Class written by Tucker Mogren on 12/30/17
* Class header will hold the function deffs
* For the mainmenu
*/
#include "MainMenu.h"
#include <string>
/*
* Class Constructor
* Inits the binNum, num, and userChoice vars
*/
MainMenu::MainMenu()
{

    userChoice = 'X';
    intResult = 0;
    userenternum1 = 0;
    userenternum2 = 0;
    binResult = "11111111";
    binnumberOne = "11111111";
    binnumberTwo = "11111111";

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
 * Function menubinaryConvert
 * Takes nothing, returns nothing
 * Will ask for a decimal number and will return
 * The string equivalent in binary form and display it.
 */
void MainMenu::menubinaryConvert()
{
    std::cout << "\nEnter a decimal Number to convert: ";
    std::cin >> userenternum1;
    binnumberOne = ConvertFromDecimal(userenternum1);
    std::cout << "\nThe decimal number: " << userenternum1 << " is: " << binnumberOne << " in binary form." << std::endl;
}
/*
 * Function menudecimalConvert
 * Takes nothing, returns nothing
 * Will ask for a binary string and
 * will convert the string to
 * Its decimal number equivalent and display the value.
 */
void MainMenu::menudecimalConvert()
{
    std::cout << "\nPlease enter a binary Number to convert: ";
    std::cin >> binnumberOne;
    userenternum1 = ConvertFromBinary(binnumberOne);
    std::cout << "\nThe binary number: "<< binnumberOne <<" is: "<< userenternum1 << " in decimal form." << std::endl;
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
/*
 * Function menuaddNumbers()
 * Takes nothing, returns nothing
 * Will add two binary numbers together
 * and then display the output (result).
 * Will take the string, convert to dec
 * Then add the dec nums together and convert that to bin.
 */
void MainMenu::menuaddNumbers()
{

    std::cout << "Please enter two binary numbers to be added together: ";
    std::cin >> binnumberOne;
    std::cin >> binnumberTwo;
    

    userenternum1 = ConvertFromBinary(binnumberOne);
    userenternum2 = ConvertFromBinary(binnumberTwo);

    intResult = userenternum1 + userenternum2;

    std::string binResult = ConvertFromDecimal(intResult);

    std::cout << "The result of " << userenternum1 << " + " << userenternum2;
    std::cout << " is " << binResult << "." << std::endl;
}
/*
 * Function menusubNumbers()
 * Takes nothing, returns nothing
 * Will subtract two binary numbers
 * and then display the output (result).
 * will take a string binary number
 * Then will convert to decimal, subtract
 * and convert the result back to binary and display
 */
void MainMenu::menusubNumbers()
{

    std::cout << "Please enter two binary numbers to be subtracted: ";
    std::cin >> binnumberOne;
    std::cin >> binnumberTwo;

    userenternum1 = ConvertFromBinary(binnumberOne);
    userenternum2 = ConvertFromBinary(binnumberTwo);

    intResult = userenternum1 - userenternum2;

    if (intResult < 0)
    {
        std::cout << "result of two numbers subtracted is negative, please try again" <<  std::endl;
        menusubNumbers();
    }
    binResult = ConvertFromDecimal(intResult);

    std::cout << "The result of " << userenternum1 << " - " << userenternum2;
    std::cout << " is " << binResult << "." << std::endl;
}
/*
 * Function menudivideNumber()
 * Returns and takes nothing
 * Will ask for two binary numbers
 * Convert then to decimal numbers
 * Divide the two numbers, truncating the results
 * Then converting the result to a binary number
 * And displaying it to the user.
 */
void MainMenu::menudivideNumber()
{
    
    
}
/*
 * Function menudivideNumber()
 * Returns and takes nothing
 * Will ask for two binary numbers
 * Convert then to decimal numbers
 * Divide the two numbers, truncating the results
 * Then converting the result to a binary number
 * And displaying it to the user.
 */
void MainMenu::menumultipleNumber()
{
    
}
/*
 * Function menumodNumber()
 * Returns and takes nothing
 * Will ask for two binary numbers
 * Convert then to decimal numbers
 * mod the two numbers, to find the reminder
 * Then converting the result to a binary number
 * And displaying it to the user.
 */
void MainMenu::menumodNumber()
{
    
}

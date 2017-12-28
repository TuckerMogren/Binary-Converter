/*
* Include the directive iostream
* Included Conversions.h for the conversions class
*/
#include <iostream>
#include "Conversion.h"
/*
* Function prototypes
*/
char GetMenuPick();
void MenuFunctions(char, Conversion);
/*
* Main Function
* Written by Tucker Mogren, 12/16/17
* IDE: Code::Blocks
* Language: C++
* Compiler: MinGW GNU GCC
*/
int main()
{
    Conversion *conversion = new Conversion();
    char choice = GetMenuPick();
    MenuFunctions(choice);

    
    delete conversion;
    return 0;
}
/*
 * Function GetMenuPick
 * Gets a single char from the user (Upper or Lower case)
 * Continue to prompt until a valid character is entered
 * Will return the character and program will perform option based on that.
 */
char GetMenuPick()
{
    char userChoice = 'x';
    std::cout << "Please enter a character to perform an operation: ";
    std::cin >> userChoice;
    userChoice = std::toupper(userChoice);
    
    
    while (userChoice != '+' && userChoice != '-' && userChoice != '/' && userChoice != '*' && userChoice != '%' && userChoice != 'B' && userChoice != 'C' && userChoice != 'P' && userChoice != 'Q')
    {
        std::cout << "Wrong value entered, please try again" << std::endl;
        std::cout << "Please enter a character to perform an operation: ";
        std::cin >> userChoice;
        userChoice = std::toupper(userChoice);
    }
    
    
    return userChoice;
    
}
/*
 * Function MenuFunctions
 * Will take a char which is the options the user wants to perform.
 * Will activate and run the function that was being called upon
 */
void MenuFunctions(char entry, Conversion *c)
{
    switch(entry)
    {
        case 'C':
        {
            int num;
            std::string newNum;
            std::cout << "Enter a decimal Number to convert: ";
            std::cin >> num;
            newNum = c->ConvertFromDecimal(num);
            std::cout << newNum << std::endl;
        }
            break;
            
        case 'B':
        {
            std::string binNum;
            std::cout << "Please enter a binary Number to convert: ";
            std::cin >> binNum;
            int decNum = c->ConvertFromBinary(binNum);
            std::cout << decNum << std::endl;
        }
            
            break;
    }
}






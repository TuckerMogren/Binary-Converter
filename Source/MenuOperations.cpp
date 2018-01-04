/*
 * Class written by Tucker Mogren on 1/3/18
 * Class  will hold the numerical operations
 * For the mainmenu
 */
#include <iostream>
#include <string>
#include "MenuOperations.h"
#include "Conversion.h"

/*
 * Class Constructor
 */
MenuOperations::MenuOperations()
{
    intResult = 0;
    userenternum1 = 0;
    userenternum2 = 0;
    binResult = "11111111";
    binnumberOne = "11111111";
    binnumberTwo = "11111111";
}
/*
 * Class Deconstructor
 */
MenuOperations::~MenuOperations()
{

}
/*
 * Function menubinaryConvert
 * Takes nothing, returns nothing
 * Will ask for a decimal number and will return
 * The string equivalent in binary form and display it.
 */
void MenuOperations::menubinaryConvert()
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
void MenuOperations::menudecimalConvert()
{
    std::cout << "\nPlease enter a binary Number to convert: ";
    std::cin >> binnumberOne;
    userenternum1 = ConvertFromBinary(binnumberOne);
    std::cout << "\nThe binary number: "<< binnumberOne <<" is: "<< userenternum1 << " in decimal form." << std::endl;
}
/*
 * Function menuaddNumbers()
 * Takes nothing, returns nothing
 * Will add two binary numbers together
 * and then display the output (result).
 * Will take the string, convert to dec
 * Then add the dec nums together and convert that to bin.
 */
void MenuOperations::menuaddNumbers()
{

    std::cout << "Please enter two binary numbers to be added together." <<  std::endl;
    std::cout << "First binary number: ";
    std::cin >> binnumberOne;
    std::cout << "Second binary number: ";
    std::cin >> binnumberTwo;


    userenternum1 = ConvertFromBinary(binnumberOne);
    userenternum2 = ConvertFromBinary(binnumberTwo);

    intResult = userenternum1 + userenternum2;

    std::string binResult = ConvertFromDecimal(intResult);

    std::cout << "The result of " << userenternum1 << " + " << userenternum2;
    std::cout << " is " << binResult << "in binary." << std::endl;
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
void MenuOperations::menusubNumbers()
{

    std::cout << "Please enter two binary numbers to be subtracted." <<  std::endl;
    std::cout << "First binary number: ";
    std::cin >> binnumberOne;
    std::cout << "Second binary number: ";
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
    std::cout << " is " << binResult << "in binary." << std::endl;
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
void MenuOperations::menudivideNumber()
{
    std::cout << "Please enter two binary numbers to divide." <<  std::endl;
    std::cout << "First binary number: ";
    std::cin >> binnumberOne;
    std::cout << "Second binary number: ";
    std::cin >> binnumberTwo;

    userenternum1 = ConvertFromBinary(binnumberOne);
    userenternum2 = ConvertFromBinary(binnumberTwo);


    if (userenternum2 == 0)
    {
        std::cerr << "ERROR: Cannot divide by zero {0}" <<  std::endl;
        menudivideNumber();
    }
    intResult = userenternum1 / userenternum2;
    binResult = ConvertFromDecimal(intResult);

    std::cout << "The result of " << userenternum1 << " / " << userenternum2;
    std::cout << " is " << binResult << "in binary." << std::endl;

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
void MenuOperations::menumultipleNumber()
{
    std::cout << "Please enter two binary numbers to multiple." <<  std::endl;
    std::cout << "First binary number: ";
    std::cin >> binnumberOne;
    std::cout << "Second binary number: ";
    std::cin >> binnumberTwo;
    
    userenternum1 = ConvertFromBinary(binnumberOne);
    userenternum2 = ConvertFromBinary(binnumberTwo);
    

    intResult = (userenternum1 * userenternum2);
    binResult = ConvertFromDecimal(intResult);
    
    std::cout << "The result of " << userenternum1 << " * " << userenternum2;
    std::cout << " is " << binResult << " in binary." << std::endl;

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
void MenuOperations::menumodNumber()
{
    std::cout << "Please enter two binary numbers find the remainder of." << std::endl;
    std::cout << "First binary number: ";
    std::cin >> binnumberOne;
    std::cout << "Second binary number: ";
    std::cin >> binnumberTwo;
    
    userenternum1 = ConvertFromBinary(binnumberOne);
    userenternum2 = ConvertFromBinary(binnumberTwo);
    
    
    intResult = (userenternum1 % userenternum2);
    binResult = ConvertFromDecimal(intResult);
    
    if(intResult == 0) // due issues with the ConverFromDecimal function if the decimal number is zero.
    {
        binResult = "00000000";
    }
    
    std::cout << "The result of " << userenternum1 << " % " << userenternum2;
    std::cout << " is " << binResult << " in binary." << std::endl;
}

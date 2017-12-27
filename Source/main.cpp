/*
* Include the directive iostream
* For the use of cin, count, endl, string, STD, pow, etc..
*/
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <sstream>
/*
* Function prototypes for ValidBin, GetBin, ConvertBin,
* ConvertDec, GetMenuPick, and MenuFunctions.
*/
bool ValidBin(std::string);
std::string GetBinary();
double ConvertFromBinary(std::string);
std::string ConvertFromDecimal(int);
char GetMenuPick();
void MenuFunctions(char);
/*
* Main Function
* Written by Tucker Mogren, 12/16/17
* IDE: Code::Blocks
* Language: C++
* Compiler: MinGW GNU GCC
*/
int main()
{
    char choice = GetMenuPick();
    MenuFunctions(choice);

    return 0;
}
/*
* Function ValidBin
* Will return a bool type
* Takes a string and returns true if the string contains 8 1's and 0's else, false
*/
bool ValidBin (std::string num)
{
    bool isEightBits = false;
    unsigned long maxNum = num.length();
    for(unsigned int i = 0; i < 8 && maxNum == 8; i++)
    {
        if(num[i] == '1' || num[i] == '0')
        {
            isEightBits = true;
        }
        else
        {
            isEightBits = false;
            break;
        }
    }
    if(isEightBits)
    {
        std::cout << "The number is an 8-bit Binary Number" << std::endl;
    }
    if(!isEightBits)
    {
        std::cout << "The number is not 8-bit Binary Number" << std::endl;
    }
    return isEightBits;
}
/*
* Function GetBinary
* Will get a Binary Number (string) from the user
* And then will use the ValidBinary function to make sure
* The entered number is valid
* Enter a string, returns a string
* Will recursively call GetBinary() if a 8-bit number is not entered
*/
std::string GetBinary ()
{
    std::string binNumber;
    std:: cout << "Please enter a 8-bit binary Number: ";
    std:: cin >> binNumber;
    bool errorCheck;
    errorCheck = ValidBin(binNumber);

    if(!(errorCheck))
    {
        std::cout << "Please try again" << std::endl;
        GetBinary();
    }
    return binNumber;
}

/*
* Function ConvertFromBinary
* Will take a String which is the binary number string
* Will error check it to make sure its a binary number
* will convert to the decimal equivalent into an int
*/
double ConvertFromBinary(std::string num)
{
    int total = 0;
    unsigned long maxLen = num.length();

    for(unsigned int i = 1; i <= maxLen; i++)
    {
        if(num[i-1] == '1')
        {
            total += pow(2, num.length() - i);
        }
    }
    return total;
}

/*
* Function ConvertFromDecimal
* Will take a single int base 10 number
* And will convert and return the string binary equivalent
*/
std::string ConvertFromDecimal(int baseTenNumber)
{
    int binaryNumber[100];
    std::string binaryString;
    int i = 0;
    while(baseTenNumber > 0)
    {
         binaryNumber[i] = baseTenNumber % 2;
         i++;
         baseTenNumber = baseTenNumber/2;
    }

    for(int j = i-1; j >= 0; j--)
    {
        binaryString += std::to_string(binaryNumber[j]);
    }
    return binaryString;
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
void MenuFunctions(char entry)
{
    switch(entry)
    {
    case 'C':
        {
        int num;
        std::string newNum;
        std::cout << "Enter a decimal Number to convert: ";
        std::cin >> num;
        newNum = ConvertFromDecimal(num);
        std::cout << newNum << std::endl;
        }
        break;

    case 'B':
        {
        std::string binNum;
        std::cout << "Please enter a binary Number to convert: ";
        std::cin >> binNum;
        int decNum = ConvertFromBinary(binNum);
        std::cout << decNum << std::endl;
        }

        break;
    }
}


/*
* Include the directive iostream
* For the use of cin, count, endl, string, STD, etc..
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/*
* Function prototypes for ValidBin, GetBin, ConvertBin,
* ConvertDec, and MainMenuPick
*/
bool ValidBin(std::string);
std::string GetBinary();
double ConvertFromBinary(std::string num);
std::string ConvertFromDecimal();
char GetMenuPick();
/*
* Main Function
* Written by Tucker Mogren, 12/16/17
* IDE: Code::Blocks
* Language: C++
* Compiler: MinGW GNU GCC
*/
int main()
{
    std::string binNum = GetBinary();
    ConvertFromBinary(binNum);
    return 0;
}
/*
* Function ValidBin
* Will return a bool type
* Takes a string and returns true if the string contains 8 1's and 0's else, false
*/
bool ValidBin (std::string num)
{
    bool isEightBits;
    for(int i = 0; i < 8 && num.length() == 8; i++)
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
* will convert to the decimal equivalent as a double
*/
double ConvertFromBinary(std::string num)
{
    system("CLS");

    char binray[num.size() + 1];

    strcpy(binray, num.c_str());

    int binNumber = atoi(binray); //thinks that this is a decimal number

    std::cout << std::hex << binNumber;


}




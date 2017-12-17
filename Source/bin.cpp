/*
* Include the directive iostream
* For the use of cin, count, endl, string, STD, pow, etc..
*/
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>
/*
* Function prototypes for ValidBin, GetBin, ConvertBin,
* ConvertDec, and MainMenuPick
*/
bool ValidBin(std::string);
std::string GetBinary();
double ConvertFromBinary(std::string num);
std::string ConvertFromDecimal(int baseTenNumber);
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
    int returnTotal = ConvertFromBinary(binNum);
    std::cout << returnTotal << std::endl;
    std::string temp = ConvertFromDecimal(255);
    std::cout << temp << std::endl;
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
    int maxNum = num.length();
    for(int i = 0; i < 8 && maxNum == 8; i++)
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
    system("CLS");
    int total = 0;
    int maxLen = num.length();

    for(int i = 1; i <= maxLen; i++)
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




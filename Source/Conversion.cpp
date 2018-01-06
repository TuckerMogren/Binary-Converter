/*
 * Class written by Tucker Mogren on 12/27/17
 * Class will hold the function implementation
 * For the number conversions
***************************************************************
 * Include the directive iostream
 * For the use of cin, count, endl, string, STD, pow, etc..
 */
#include <string>
#include <iostream>
#include <math.h>
#include <vector>
#include "Conversion.h"
/*
* Class constructor
* Inits the binNum, decNumber vars
*/
Conversion::Conversion()
{
    binNumber = "11111111";
    decNumber = 255;
}
/*
* Class destructor
*/
Conversion::~Conversion()
{

}
/*
 * Function ValidBin
 * Will return a bool type
 * Takes a string and returns true if the string contains 8 1's and 0's else, false
 */
bool Conversion::ValidBin(std::string num)
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
        std::cout << "The number is an Binary Number" << std::endl;
    }
    if(!isEightBits)
    {
        std::cout << "The number is not Binary Number" << std::endl;
    }
    return isEightBits;
}
/*
 * Function ConvertFromBinary
 * Will take a String which is the binary number string
 * Will error check it to make sure its a binary number
 * will convert to the decimal equivalent into an int
 */
int Conversion::ConvertFromBinary(std::string num)
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
std::string Conversion::ConvertFromDecimal(int baseTenNumber)
{
    std::vector <int> binaryNumber;
    std::string binaryString;
    int i = 0;
    if (baseTenNumber < 0) {
        std::cerr << "ERROR: decimal number MUST be positive!" << std::endl;
        binaryString = "ERROR: NEGITVE NUMBER WAS ENTERED.";
    }
    else if(baseTenNumber == 0)
    {
        binaryString = "0000";
    }
    while(baseTenNumber > 0)
    {
        binaryNumber.push_back(baseTenNumber % 2);
        baseTenNumber = baseTenNumber/2;
        i++;
    }

    for(int j = i-1; j >= 0; j--)
    {
        binaryString += std::to_string(binaryNumber[j]);
    }
    return binaryString;
}



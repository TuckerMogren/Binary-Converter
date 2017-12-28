/*
 * Class written by Tucker Mogren on 12/27/17
 * Class will hold the function implementation
 * For the number conversions
 */
#include <string>
#include <iostream>
#include "Conversion.h"

Conversion::Conversion()
{
    binNumber = "11111111";
    decNumber = 255;
}
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
        std::cout << "The number is an 8-bit Binary Number" << std::endl;
    }
    if(!isEightBits)
    {
        std::cout << "The number is not 8-bit Binary Number" << std::endl;
    }
    return isEightBits;
}

#include <iostream>
bool ValidBin(std::string);
std::string GetBinary();
int main()
{
    GetBinary();
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
    return isEightBits;
}
/*
* Function GetBinary
* Will get a Binary Number (string) from the user
* And then will use the ValidBinary function to make sure
* The entered number is valid
* Returns a string, returns a string
*/
std::string GetBinary ()
{
    std::string binNumber;
    std:: cout << "Please enter a 8-bit binary Number: ";
    std:: cin >> binNumber;
    bool errorCheck;
    errorCheck = ValidBin(binNumber);
    if(errorCheck)
    {
        std::cout << "The number is an 8-bit Binary Number" << std::endl;
    }
    if(!(errorCheck))
    {
        std::cout << "The number is not an 8-bit Binary Number" << std::endl;
    }
    return binNumber;
}


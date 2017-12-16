#include <iostream>


bool ValidBin(std::string);
std::string GetBinary();
int main()
{
    bool bit = ValidBin("00001110");
    if(bit)
    {
        std::cout << "True." << std::endl;
    }
    if(!bit)
    {
        std::cout << "False." << std::endl;
    }

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
*
*
*
*/
std::string GetBinary ()
{
    return "Tucker";
}


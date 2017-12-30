/*
* Class header written by Tucker Mogren on 12/27/17
* Class header will hold the function deffs
* For the number conversions
*/

#ifndef Conversion_h
#define Conversion_h
#include <string>
class Conversion
{
protected:
    bool ValidBin(std::string);
    std::string GetBinary();
    int ConvertFromBinary(std::string);
    std::string ConvertFromDecimal(int);
public:
    Conversion();
    ~Conversion();
private:
    int decNumber;
    std::string binNumber;
};

#endif /* Conversion_h */

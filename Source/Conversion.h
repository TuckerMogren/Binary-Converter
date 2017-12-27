/*
* Class header written by Tucker Mogren on 12/27/17
* Class header will hold the function deffs
* For the number conversions
*/

#ifndef Conversion_h
#define Conversion_h
class Conversion
{
private:
    bool ValidBin(std::string);
    std::string GetBinary();
    double ConvertFromBinary(std::string);
    std::string ConvertFromDecimal(int);
    int decNumber;
    std::string binNumber;
public:
    Conversion();
    ~Conversion();
    std::string getbinNumber();
    void setbinNumber(std::string);
    int getdecNumber();
    void setdecNumber(int);
    
};

#endif /* Conversion_h */

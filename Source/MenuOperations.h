/*
 * Class header written by Tucker Mogren on 1/3/18
 * Class header will hold the numerical operations
 * For the mainmenu
 */
#ifndef Operations_h
#define Operations_h

#include <string>
#include "Conversion.h"


class MenuOperations : protected Conversion
{
public:
    MenuOperations();
    ~MenuOperations();
protected:
    void menubinaryConvert();
    void menudecimalConvert();
    void menuaddNumbers();
    void menusubNumbers();
    void menudivideNumber();
    void menumultipleNumber();
    void menumodNumber();

private:

    std::string binnumberOne;
    std::string binnumberTwo;
    std::string binResult;
    int userenternum1;
    int userenternum2;
    int intResult;



};

#endif

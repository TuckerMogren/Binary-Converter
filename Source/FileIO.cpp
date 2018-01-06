#include "FileIO.h"
#include <iostream>
#include <cstdlib>
/*
* Class constructor
* Opens the file or will create the file depending
* using the string provided by the user.
*/
FileIO::FileIO(std::string fileString)
{
    fileFile.open(fileString);


    datafromFile = "blah";
    datatoFile = "blah";
    fileOperation = 'X';
    binnumber1 = "11111111";
    binnumber2 = "11111111";


    if(!fileFile.is_open())
    {
        std::cerr << "ERROR: Unable to open file" << std::endl;
        exit(EXIT_FAILURE);

    }
    else{
        std::cout << "File was opened" << std::endl;
    }

}
/*
* Class destructor
*/
FileIO::~FileIO()
{
    fileFile.close();
}
/*
* Function filereadOperation()
* takes nothing, returns char.
* Will parse the file for the first charater
* that will dicate the operation to be performed
*/
char FileIO::filereadOperation()
{

    fileFile >> fileOperation;


    return fileOperation;
}
/*
 * Function filereadbinOne()
 * takes nothing, returns char.
 * Will parse the file for the first string that
 * will be the first binary number to operate on
 */
std::string FileIO::filereadbinOne()
{

    fileFile >> binnumber1;


    return binnumber1;
}
/*
 * Function filereadbinTwo()
 * takes nothing, returns char.
 * Will parse the file for the first string that
 * will be the second binary number to operate on
 */
std::string FileIO::filereadbinTwo()
{

    fileFile >> binnumber2;


    return binnumber2;
}



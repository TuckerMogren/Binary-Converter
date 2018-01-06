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
    datafromFile = "";
    datatoFile = "";
    fileCharater = "";
    filedatafinalLocation = "";
    fileRead();
}
/*
* Class destructor
*/
FileIO::~FileIO()
{
    fileFile.close();
}
/*
* Function fileRead
* takes nothing, returns nothing.
* Will read the data from a file
* And display it to the console. (as of right now, will change)
*/
void FileIO::fileRead()
{

    if(!fileFile.is_open())
    {
        std::cerr << "ERROR: Unable to open file" << std::endl;
        exit(EXIT_FAILURE);

    }

    while( fileFile >> fileCharater)
    {
        filedatafinalLocation += fileCharater;
        filedatafinalLocation += " ";
    }

    std::cout << filedatafinalLocation;
}
/*
* Function fileWrite
* Returns nothing, takes a string to be written to the file.
* Will as the user for data to be written to the file
* And then write the data to said file
*/
void FileIO::fileWrite(std::string datatoFile)
{


}


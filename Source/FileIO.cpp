#include "FileIO.h"
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
*
*/
void FileIO::fileRead()
{

    //fileFile >>
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


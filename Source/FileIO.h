#ifndef FILEIO_H
#define FILEIO_H

#include <fstream>

class FileIO
{
    public:
        FileIO(std::string fileString);
        ~FileIO();

    private:
        void openFile();
        void readFile();
        void fileRead();
        void fileWrite(std::string datatoFile);
    private:
        std::ifstream fileFile;
        std::string datatoFile;
        std::string datafromFile;
        std::string fileCharater;
        std::string filedatafinalLocation;
};

#endif // FILEIO_H

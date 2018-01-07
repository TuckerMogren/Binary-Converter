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
        char filereadOperation();
        std::string filereadbinOne();
        std::string filereadbinTwo();
    public:
        char getOperation();
        std::string getbinOne();
        std::string getbinTwo();

    private:
        std::ifstream fileFile;
        std::string datatoFile;
        std::string datafromFile;
        char fileOperation;
        std::string binnumber1;
        std::string binnumber2;

};

#endif // FILEIO_H

#ifndef FILEIO_H
#define FILEIO_H

#include <fstream>
class FileIO
{
    public:
        FileIO(std::string fileString);
        ~FileIO();

    private:
<<<<<<< HEAD:Xcode 9.2/BinaryConvert/BinaryConvert/FileIO.h
    void openFile();
    void readFile();
    
=======
        void fileRead();
        void fileWrite(std::string datatoFile);
    private:
        std::fstream fileFile;
        std::string datatoFile;
        std::string datafromFile;
        std::string fileCharater;
        std::string filedatafinalLocation;
>>>>>>> b3a2e16226edb84df2ce54793c33b5263104e16e:Source/FileIO.h
};

#endif // FILEIO_H

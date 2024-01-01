#include <iostream>
using namespace std;

constexpr int maxBuffer = 1024;  // new way to define constant

int main(int argc, char const *argv[])
{
    static const char* originalFile = "Example.txt";
    static const char* editedFile = "Edited.txt";
    static const char* information = "Lorem ipsum dolor sit ....\n";

    //! renaming file
    // rename(originalFile, editedFile);

    //! remove file
    // remove(editedFile);

    //! opening file in write mode
    // FILE* filePtr = fopen(originalFile, "w");  // here we are writing in file but if file not exists then creates it.

    //! Putting the information in file
    // fputs(information, filePtr);

    //! opening file in append mode
    // FILE* filePtr = fopen(originalFile, "a");  
    // fputs("This is Appended Data\n", filePtr);

    //! opening file in read mode
    FILE* filePtr = fopen(originalFile, "r");  
    char buffer[maxBuffer];
    while(fgets(buffer, maxBuffer, filePtr)){fputs(buffer, stdout);}
    

    //!closing the file
    fclose(filePtr);
    return 0;
}

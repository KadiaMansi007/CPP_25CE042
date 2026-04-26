#ifndef FILECOUNTER_H
#define FILECOUNTER_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileCounter
{
private:
    int charCount;
    int wordCount;
    int lineCount;

public:
    FileCounter();

    void processFile(string);
    void displayResult();
};

#endif

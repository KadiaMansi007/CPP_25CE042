#ifndef WORDFREQUENCY_H
#define WORDFREQUENCY_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class WordFrequency
{
private:
    string words[100];
    int count[100];
    int size;

    string toLower(string);
    void processText(string);

public:
    WordFrequency();

    void readFromFile(string);
    void displayFrequency();
};

#endif

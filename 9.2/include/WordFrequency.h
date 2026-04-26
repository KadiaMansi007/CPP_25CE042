#ifndef WORDFREQUENCY_H
#define WORDFREQUENCY_H

#include <iostream>
#include <map>
using namespace std;

class WordFrequency
{
    map<string, int> freq;

public:
    void processSentence(string sentence);
    void displayFrequency();
};

#endif

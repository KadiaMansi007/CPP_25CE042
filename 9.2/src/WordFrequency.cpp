#include "WordFrequency.h"
#include <sstream>

// Process sentence and count words
void WordFrequency::processSentence(string sentence)
{
    string word;
    stringstream ss(sentence);

    while (ss >> word)
    {
        freq[word]++;  // increment frequency
    }
}

// Display word frequency
void WordFrequency::displayFrequency()
{
    cout << "\n===== Word Frequency =====\n";

    for (auto it : freq)
    {
        cout << it.first << " : " << it.second << endl;
    }
}

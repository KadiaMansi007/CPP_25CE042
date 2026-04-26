#include "WordFrequency.h"

int main()
{
    WordFrequency obj;
    string sentence;

    cout << "===== Word Frequency Counter (STL map) =====\n";

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    obj.processSentence(sentence);
    obj.displayFrequency();

    return 0;
}

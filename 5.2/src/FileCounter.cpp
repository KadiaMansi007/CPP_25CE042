#include "FileCounter.h"

// Constructor
FileCounter::FileCounter()
{
    charCount = 0;
    wordCount = 0;
    lineCount = 0;
}

// Process file
void FileCounter::processFile(string filename)
{
    ifstream file(filename);

    if (!file)
    {
        cout << "Error: File not found!\n";
        return;
    }

    string line;

    while (getline(file, line))
    {
        lineCount++;

        bool inWord = false;

        for (int i = 0; i < line.length(); i++)
        {
            charCount++;

            if (line[i] != ' ' && inWord == false)
            {
                wordCount++;
                inWord = true;
            }
            else if (line[i] == ' ')
            {
                inWord = false;
            }
        }

        charCount++; // for newline
    }

    file.close();
    cout << "File processed successfully!\n";
}

// Display result
void FileCounter::displayResult()
{
    cout << "\nTotal Lines: " << lineCount << endl;
    cout << "Total Words: " << wordCount << endl;
    cout << "Total Characters: " << charCount << endl;
}

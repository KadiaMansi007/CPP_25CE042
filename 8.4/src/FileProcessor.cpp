#include "FileProcessor.h"
#include <fstream>
#include <sstream>

void FileProcessor::processFile(const string &filename)
{
    ifstream file(filename);

    // File not found exception
    if (!file)
    {
        throw "File not found or cannot be opened!";
    }

    string line;
    int lineNo = 0;
    float sum = 0;
    int count = 0;

    cout << "\n===== Processing File Line by Line =====\n";

    while (getline(file, line))
    {
        lineNo++;
        stringstream ss(line);
        float num;

        // Try reading number from line
        if (!(ss >> num))
        {
            cout << "Invalid data at line " << lineNo << " (skipped)\n";
            continue;
        }

        sum += num;
        count++;

        cout << "Line " << lineNo << " processed: " << num << endl;
    }

    file.close();

    if (count == 0)
    {
        cout << "No valid numeric data found in file.\n";
    }
    else
    {
        cout << "\n===== Result =====\n";
        cout << "Total Sum: " << sum << endl;
        cout << "Average  : " << sum / count << endl;
    }
}

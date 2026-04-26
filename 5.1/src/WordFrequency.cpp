#include "WordFrequency.h"

// Constructor
WordFrequency::WordFrequency()
{
    size = 0;
    for (int i = 0; i < 100; i++)
        count[i] = 0;
}

// Convert to lowercase
string WordFrequency::toLower(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    return str;
}

// Process text
void WordFrequency::processText(string text)
{
    string word = "";

    for (int i = 0; i <= text.length(); i++)
    {
        if (text[i] == ' ' || text[i] == '\0')
        {
            if (word != "")
            {
                word = toLower(word);

                bool found = false;

                for (int j = 0; j < size; j++)
                {
                    if (words[j] == word)
                    {
                        count[j]++;
                        found = true;
                        break;
                    }
                }

                if (!found)
                {
                    words[size] = word;
                    count[size] = 1;
                    size++;
                }

                word = "";
            }
        }
        else
        {
            word += text[i];
        }
    }
}

// Read from file
void WordFrequency::readFromFile(string filename)
{
    ifstream file(filename);

    if (!file)
    {
        cout << "Error opening file!\n";
        return;
    }

    string line;

    while (getline(file, line))
    {
        processText(line);
    }

    file.close();
    cout << "File processed successfully!\n";
}

// Display
void WordFrequency::displayFrequency()
{
    cout << "\nWord Frequencies:\n";

    for (int i = 0; i < size; i++)
    {
        cout << words[i] << " : " << count[i] << endl;
    }
}

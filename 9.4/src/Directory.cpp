#include "Directory.h"

// Add folder
void Directory::addFolder(string folderName)
{
    if (folders.find(folderName) == folders.end())
    {
        folders[folderName] = vector<string>();
        cout << "Folder created: " << folderName << endl;
    }
    else
    {
        cout << "Folder already exists!\n";
    }
}

// Add file to folder
void Directory::addFile(string folderName, string fileName)
{
    if (folders.find(folderName) != folders.end())
    {
        folders[folderName].push_back(fileName);
        cout << "File added to " << folderName << endl;
    }
    else
    {
        cout << "Folder not found!\n";
    }
}

// Display full directory
void Directory::displayDirectory()
{
    cout << "\n===== Directory Structure =====\n";

    for (auto it = folders.begin(); it != folders.end(); it++)
    {
        cout << "Folder: " << it->first << endl;

        if (it->second.empty())
        {
            cout << "  (No files)\n";
        }
        else
        {
            for (string file : it->second)
            {
                cout << "  - " << file << endl;
            }
        }
    }
}

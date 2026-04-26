#ifndef DIRECTORY_H
#define DIRECTORY_H

#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Directory
{
    map<string, vector<string>> folders;

public:
    void addFolder(string folderName);
    void addFile(string folderName, string fileName);
    void displayDirectory();
};

#endif

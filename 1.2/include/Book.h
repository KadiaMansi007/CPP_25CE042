#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <string>
using namespace std;

class Library
{
private:
    int bookID;
    string title;
    string author;
    int copies;

public:
    Library();

    void addBook();
    void issueBook();
    void returnBook();
    void displayBook();

    int getBookID();
};

#endif

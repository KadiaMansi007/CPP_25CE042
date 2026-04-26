#include "Book.h"

// Constructor
Library::Library()
{
    bookID = 0;
    title = "";
    author = "";
    copies = 0;
}

// Add Book
void Library::addBook()
{
    cout << "\nEnter Book ID: ";
    cin >> bookID;
    cin.ignore();

    cout << "Enter Title: ";
    getline(cin, title);

    cout << "Enter Author: ";
    getline(cin, author);

    cout << "Enter Copies: ";
    cin >> copies;

    cout << "Book added successfully!\n";
}

// Issue Book
void Library::issueBook()
{
    if (copies > 0)
    {
        copies--;
        cout << "Book issued successfully!\n";
    }
    else
    {
        cout << "No copies available!\n";
    }
}

// Return Book
void Library::returnBook()
{
    copies++;
    cout << "Book returned successfully!\n";
}

// Display Book
void Library::displayBook()
{
    cout << "\nBook ID: " << bookID;
    cout << "\nTitle: " << title;
    cout << "\nAuthor: " << author;
    cout << "\nCopies: " << copies << "\n";
}

// Get Book ID
int Library::getBookID()
{
    return bookID;
}

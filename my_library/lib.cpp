/*
// Student Name: Ian Xiong
// Student Number: 21118754
//
// SYDE 121 Lab: Assignment 2
// Filename: book.cpp
//
// I hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts. This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others.
//
// Project: Book Library Class
// This file defines the Library class and its methods.
//
//      cout << "Checking Book: " << i << endl;
//      books[i].print();
//
//      was used to check the processes of the code and debug.
//
// Due Date: November 19, 2024
*/

#include "lib.hpp"
#include <iostream>
#include <vector>
#include "book.hpp"

using namespace std;

// Defining the constructors for a Library object
Library::Library() {}
Library::Library(const vector<Book> &b)
    : books(b) {}

/*
INPUTS: n/a
FUNCTION: Prints the title, author, and date of publication of each book in the library.
RETURN VALUE: n/a
*/
void Library::print() const
{
    for (int i = 0; i < books.size(); i++)
    {
        cout << "Book " << i + 1 << ":" << endl;
        books[i].print();
        cout << endl;
    }
}

/*
INPUTS: The strings title, author, and date of publication of a book
FUNCTION: Checks if book is already in library, if not, it adds this book to the library
RETURN VALUE: True if book is successfully added, false if book is already in library
*/
bool Library::insertion(const string t, const string a, const string d)
{
    Book new_book(t, a, d);
    for (int i = 0; i < books.size(); i++)
    {
        if (books[i].getTitle() == t &&
            books[i].getAuthor() == a &&
            books[i].getDateOfPublication() == d)
        {
            return false;
        }
    }

    Library::books.push_back(new_book);
    return true;
}

/*
INPUTS: The object Book that is to be added to the library
FUNCTION: Checks if book is already in library, if not, it adds this book to the library
RETURN VALUE: True if book is successfully added, false if book is already in library
*/
bool Library::insertion(Book b)
{
    for (int i = 0; i < books.size(); i++)
    {
        if (books[i].getTitle() == b.getTitle() &&
            books[i].getAuthor() == b.getAuthor() &&
            books[i].getDateOfPublication() == b.getDateOfPublication())
        {
            return false;
        }
    }
    Library::books.push_back(b);
    return true;
}

/*
INPUTS: The strings title, author, and date of publication of a book
FUNCTION: Checks if book is already in library, if is is, it removes this book from the library
RETURN VALUE: True if book is successfully removed, false if book isn't found in library
*/
bool Library::removal(const string t, const string a, const string d)
{
    // search through the library to see theres a match
    Book new_book(t, a, d);
    for (int i = 0; i < books.size(); i++)
    {
        if (books[i].getTitle() == t &&
            books[i].getAuthor() == a &&
            books[i].getDateOfPublication() == d)
        {
            books.erase(books.begin() + i);
            return true;
        }
    }
    return false;
}

/*INPUTS: The object Book that is to be removed from the library
FUNCTION: Checks if book is already in library, if is is, it removes this book from the library
RETURN VALUE: True if book is successfully removed, false if book isn't found in library
*/
bool Library::removal(Book b)
{
    for (int i = 0; i < books.size(); i++)
    {
        if (books[i].getTitle() == b.getTitle() &&
            books[i].getAuthor() == b.getAuthor() &&
            books[i].getDateOfPublication() == b.getDateOfPublication())
        {
            books.erase(books.begin() + i);
            return true;
        }
    }
    return false;
}

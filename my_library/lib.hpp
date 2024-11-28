/*
// Student Name: Ian Xiong
// Student Number: 21118754
//
// SYDE 121 Lab: Assignment 2
// Filename: lib.hpp
//
// I hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts. This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others.
//
// Project: Book Library Class
// This header file declares the Library class: a Library is a vector containing Books. 
// In order to construct a Library, a user can enter a vector of books or nothing at all.
// A Method to print out information the information about the books in the library is declared here.
// Additionally, users can insert or remove books from the library based on their title, author, and date of publication or by the book object name.
//
// Due Date: November 19, 2024
*/

#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include <vector>
#include "Book.hpp"
#include <iostream>

class Library
{
    private:
        vector<Book> books;
    
    public:
        //Declaraing Library constructors
        Library();
        Library(const vector<Book>& b);

        //Declaring the method to print out the books in the library
        void print() const;

        //Declaring the insertion and removal method to insert/remove a book to/from the library
        bool insertion(const string t, const string a, const string d);
        bool insertion(Book b);
        bool removal(const string t, const string a, const string d);
        bool removal(Book b);
};

#endif
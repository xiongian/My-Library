/*
// Student Name: Ian Xiong
// Student Number: 21118754
//
// SYDE 121 Lab: Assignment 2
// Filename: book.hpp
//
// I hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts. This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others.
//
// Project: Book Library Class
// This header file declares the Book class: a book has attributes title, author, and date of publication. 
// In order to construct a book, a user can enter either the title, title and author, title, author, and DOP, or no information at all.
// The methods to get these attributes of a specific book are also declared, and a method to print out information of a book is declared here as well.
// Additionally, information about a singular book or books in the library can be printed out as well.
//
// Due Date: November 19, 2024
*/
#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>
#include <iostream>
using namespace std;

class Book
{
    private:
        string author;
        string title;
        string date_of_publication;

    public:
        //Declaring the default and parametric constructors to create the book object
        Book();
        Book(const string& t, const string& a, const string& d);
        Book(const string& t, const string& a);
        Book(const string& t);

        //Declaring the getters for the author, title, and DOP of a specific book
        string getTitle();
        string getAuthor();
        string getDateOfPublication();

        //Declaring the method to print the author, title, and DOP of a specific book
        void print() const;

};

#endif
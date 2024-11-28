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
// This file defines the Book class and its methods.
//
// Due Date: November 19, 2024
*/

#include "book.hpp"
#include <iostream>
#include <vector>

using namespace std;

//Defining the default constructor for a book
Book::Book() : title("n/a"), author("n/a"), date_of_publication("n/a") {}

//Defining the parametric constructors for a book
Book::Book(const string &t, const string &a, const string &d)
    : title(t), author(a), date_of_publication(d) {}

Book::Book(const string &t, const string &a)
    : title(t), author(a), date_of_publication("n/a") {}

Book::Book(const string &t)
    : title(t), author("n/a"), date_of_publication("n/a") {}

//Defining the method to print out the Author, Title, and Date of a book
void Book::print() const
{
    cout << "Title: " << title << endl << "Authors: " << author << endl << "Date of Publication: " << date_of_publication << endl << endl;
}

//Defining the methods to get the author, title, and DOP of a specific book
string Book::getTitle()
{
    return title;
}
string Book::getAuthor()
{
    return author;
}
string Book::getDateOfPublication()
{
    return date_of_publication;
}
/*
// Student Name: Ian Xiong
// Student Number: 21118754
//
// SYDE 121 Lab: Assignment 2
// Filename: main.cpp
//
// I hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts. This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others.
//
// Project: Book Library Class
// The library uses two classes: a Book and Library to simulate a library system. Users can insert and remove books from
// the library based on their title, author, and date of publication or by the book object name. 
// Additionally, information about a singular book or books in the library can be printed out as well.
//
// Due Date: November 19, 2024
*/


#include "book.hpp"
#include "lib.hpp"
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    Book book1("1984", "George Orwell", "1949");
    Book book2("To Kill a Mockingbird", "Harper Lee");
    Book book3("The Giver");
    
    //Initializes a vector of books and stores them in Library myLibrary.
    vector<Book> myBooks = {book1, book2, book3};
    Library myLibrary(myBooks);

    //Prints out the books in myLibrary
    myLibrary.print();

    //Test 1: Inserting a book manually
    myLibrary.insertion("J.K. Rowling", "Harry Potter and the Philosopher's Stone", "1997");

    //Test 2: Inserting a book by its object
    Book book4("Farenheit 451");
    myLibrary.insertion(book4);

    //Test 3: Removing a book manually
    myLibrary.removal("1984", "George Orwell", "1949");

    //Test 4: Removing a book by its object
    myLibrary.removal(book2);

    //Prints out the updated books in myLibrary
    myLibrary.print();
    
    return 0;
}
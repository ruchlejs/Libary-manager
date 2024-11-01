#ifndef BOOK_H_
#define BOOK_H_

#include <iostream>
#include <string>

using String = std::string; //alias to simplified writing

class Book{
    String name;
    String author;
    int year;

    public:
    Book(String name, String author, int year);
    String getName(void) const;
    String getAuthor(void) const;
    int getYear(void) const;
    void printInformations(void) const;
};

#endif
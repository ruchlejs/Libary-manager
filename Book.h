#ifndef BOOK_H_
#define BOOK_H_

#include <iostream>
#include <string>
#include "Media.h"

using String = std::string; //alias to simplified writing

class Book : public Media{
    String author;

    public:
    Book(String name, String author, int year);
    String getAuthor(void) const;
    void printInformations(void) const;
};

#endif
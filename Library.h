#ifndef LIBRARY_H_
#define LIBRARY_H_

#include "Book.h"
#include <vector>

class Library{
    std::vector<Book> books;

    public:
    void addBook(Book book);
    void printLibrary(void);
    void removeBookByName(String name);
};

#endif
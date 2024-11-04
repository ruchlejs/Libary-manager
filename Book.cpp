#include "Book.h"

Book::Book(String name, String author, int year): Media(name,year), author(author) {}


String Book::getAuthor(void) const{
    return author;
}

void Book::printInformations(void) const{
    std::cout << "Title: " << name << ", Author: " << author << ", Published in: " << year << std::endl;
}
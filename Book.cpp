#include "Book.h"

Book::Book(String name, String author, int year): name(name), author(author), year(year) {}

String Book::getName(void) const{
    return name;
}

String Book::getAuthor(void) const{
    return author;
}

int Book::getYear(void) const{
    return year;
}

void Book::printInformations(void) const{
    std::cout << "Title: " << name << ", Author: " << author << ", Published in: " << year << std::endl;
}
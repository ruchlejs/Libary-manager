#include "Library.h"

void Library::addBook(Book book){
        books.push_back(book);
    }

void Library::printLibrary(void){
    if (books.empty()) {
        std::cout << "The library is empty.\n";
        return;
    }

    for(const auto& book : books){
        book.printInformations();
    }
}

void Library::removeBookByName(String name){
    for(auto it = books.begin(); it != books.end(); it++){
        if(it->getName() == name){
            books.erase(it);
            std::cout << "The book \"" << name << "\" has been removed.\n";
            return;
        }
    }
    std::cout << "The book \"" << name << "\" was not found.\n";

}
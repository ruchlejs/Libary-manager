#include <iostream>
#include <vector>
#include <string>

using String = std::string; //alias to simplified writing

class Book{
    String name;
    String author;
    int year;

    public:
    Book(String name, String author, int year): name(name), author(author), year(year) {}

    String getName(void) const{
        return name;
    }

    String getAuthor(void) const{
        return author;
    }

    int getYear(void) const{
        return year;
    }

    void printInformations(void) const{
        std::cout << "Title: " << name << ", Author: " << author << ", Published in: " << year << std::endl;
    }
};

class Library{

    std::vector<Book> books;

    public:

    void addBook(Book book){
        books.push_back(book);
    }

    void printLibrary(void){
        for(const auto& book : books){ //Better way of practice
            book.printInformations();
        }
    }

    void removeBookByName(String name){
        for(auto it = books.begin(); it != books.end(); it++){
            if(it->getName() == name){
                books.erase(it);
                return;
            }
        }

    }
};

int main(void){
    
    return 0;
}
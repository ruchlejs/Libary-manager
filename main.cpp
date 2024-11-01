#include <iostream>
#include <string>

using String = std::string; //alias to simplified writing

class Book{
    String name;
    String author;
    int year;

    public:
    Book(String author, String name, int year): name(name), author(author), year(year) {}

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

int main(void){
    
}
#include <iostream>
#include <vector>
#include <string>

#include "Book.h"
#include "Library.h"

int main(void){
    Library myLibrary;
    int choice;

    Book lotr("Lord of the rings", "J.R.R. Tolkien", 1954);
    Book nineteenEightyFour("1984", "George Orwell", 1949);
    Book leRougeEtLeNoir("Le Rouge et le Noir", "Stendhal", 1830);

    myLibrary.addBook(lotr);
    myLibrary.addBook(nineteenEightyFour);
    myLibrary.addBook(leRougeEtLeNoir);


    String name, author;
    std::cout << "Welcome to the library, what do you want to do?" << std::endl;
    std::cout << "[1] See the available books \t[2] add a book \t[3] remove a book \t[4]Quit" <<std::endl;

    do{
        
    std::cin >> choice;
    std::cin.ignore();//ignore \n at the end
        switch(choice){
            case 1 :
                myLibrary.printLibrary();
                break;

            case 2 :
                int year;
                std::cout << "Enter the title of the book:" << std::endl;
                std::getline(std::cin,name);
                std::cout << "Enter the name of the book's author:" << std::endl;
                std::getline(std::cin,author);
                std::cout << "Enter the publishing year of the book:" << std::endl;
                std::cin >> year;

                myLibrary.addBook(Book(name,author,year));
                std::cout << "The book \"" << name << "\" has been added to the library.\n";
                break;

            case 3 :
                std::cout << "Enter the name of the book:" << std::endl;
                std::getline(std::cin,name);

                myLibrary.removeBookByName(name);
                break;

            case 4 : 
                std::cout << "Exiting the library. Goodbye!\n";
                break;

            default:
            std::cout << "You need to choose between 1,2 or 3. Try again." << std::endl;
        }

    }while(choice != 4);

    return 0;
}
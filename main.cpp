#include <iostream>
#include <vector>
#include <string>
#include <memory>

#include "Media.h"
#include "Book.h"
#include "Library.h"
#include "Film.h"

int choose_media_type(void);

int main(void){
    Library myLibrary;
    int choice;

    Book* lotr = new Book("Lord of the rings", "J.R.R. Tolkien", 1954);
    Book* nineteenEightyFour = new Book("1984", "George Orwell", 1949);
    Book* leRougeEtLeNoir = new Book("Le Rouge et le Noir", "Stendhal", 1830);
    std::unique_ptr<Book> lotr_book_ptr (lotr);
    std::unique_ptr<Book> nineteenEightyFour_ptr (nineteenEightyFour);
    std::unique_ptr<Book> leRougeEtLeNoir_ptr (leRougeEtLeNoir);
    myLibrary.addMedia(std::move(lotr_book_ptr));
    myLibrary.addMedia(std::move(nineteenEightyFour_ptr));
    myLibrary.addMedia(std::move(leRougeEtLeNoir_ptr));

    Film* lotr_movie = new Film("Lord of the rings", "J.R.R. Tolkien", 1954);
    std::unique_ptr<Film> lotr_ptr (lotr_movie);
    myLibrary.addMedia(std::move(lotr_ptr));

    String name, author;
    std::cout << "Welcome to the library, what do you want to do?" << std::endl;
    std::cout << "[1] See the available media \t[2] add a media \t[3] remove a media \t[4]Quit" <<std::endl;

    do{
        
    std::cin >> choice;
    std::cin.ignore();//ignore \n at the end

    int type;

        switch(choice){
            case 1 :
                myLibrary.printLibrary();
                break;

            case 2 :
                int year;
                type = choose_media_type();
                if(type == 1){
                    std::cout << "Enter the title of the book:" << std::endl;
                    std::getline(std::cin,name);
                    std::cout << "Enter the name of the book's author:" << std::endl;
                    std::getline(std::cin,author);
                    std::cout << "Enter the publishing year of the book:" << std::endl;
                    std::cin >> year;

                    std::unique_ptr<Book> newBook(new Book(name,author,year));
                    myLibrary.addMedia(std::move(newBook));
                    std::cout << "The book \"" << name << "\" has been added to the library.\n";
                }
                else if(type == 2){
                    std::cout << "Enter the title of the film:" << std::endl;
                    std::getline(std::cin,name);
                    std::cout << "Enter the name of the film's director:" << std::endl;
                    std::getline(std::cin,author);
                    std::cout << "Enter the release year of the film:" << std::endl;
                    std::cin >> year;

                    std::unique_ptr<Film> newFilm( new Film(name,author,year));
                    myLibrary.addMedia(std::move(newFilm));
                    std::cout << "The movie \"" << name << "\" has been added to the library.\n";
                }

                break;

            case 3 :
                std::cout << "Enter the name of the media:" << std::endl;
                std::getline(std::cin,name);

                myLibrary.removeMediaByName(name);
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

int choose_media_type(void){
    String type;
    std::cout <<"Is it a book, or a film?\n";
    while (true)
    {
        std::getline(std::cin,type);
        if(type == "book"){
            return 1;
        }
        else if(type == "film"){
            return 2;
        }
        else{
            std::cout << "Invalid choice. Please type \"book\" or \"film\":\n";
        }
    }
}
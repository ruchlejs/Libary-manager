#include "../includes/Film.h"

Film::Film(String name, String director, int year) : Media(name,year), director(director) {}

void Film::printInformations() const{
    std::cout << "Title: " << name << ", director: " << director << ", Published in: " << year << std::endl;
}
#include "../includes/Library.h"
#include "../includes/Media.h"

void Library::addMedia(std::unique_ptr<Media> media){
        medias.push_back(std::move(media));
    }

void Library::printLibrary(void){
    if (medias.empty()) {
        std::cout << "The library is empty.\n";
        return;
    }

    for(const auto& media : medias){
        media->printInformations();
    }
}

void Library::removeMediaByName(String& name){
    for(auto it = medias.begin(); it != medias.end(); it++){
        if((*it)->getName() == name){
            medias.erase(it);
            std::cout << "The book \"" << name << "\" has been removed.\n";
            return;
        }
    }
    std::cout << "The book \"" << name << "\" was not found.\n";

}
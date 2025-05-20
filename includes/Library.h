#ifndef LIBRARY_H_
#define LIBRARY_H_

#include "Book.h"
#include "Media.h"
#include <vector>
#include <memory>

class Library{
    std::vector<std::unique_ptr<Media>> medias;

    public:
    void addMedia(std::unique_ptr<Media> media);
    void printLibrary(void);
    void removeMediaByName(String& name);
};

#endif
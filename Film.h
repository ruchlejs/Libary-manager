#ifndef FILM_H_
#define FILM_H_

#include "Media.h"

class Film : public Media{
    String director;
    public:
        Film(String name, String director, int year);
        String getDirector(void) const;
        void printInformations() const override;
};

#endif
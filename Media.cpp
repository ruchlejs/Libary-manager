#include "Media.h"

Media::Media(String name, int year): name(name), year(year) {}

String Media::getName(void) const{
    return name;
}

int Media::getYear(void) const{
    return year;
}
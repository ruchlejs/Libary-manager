#ifndef _MEDIA_H_
#define _MEDIA_H_

#include <iostream>

using String = std::string;

class Media{
    protected:    
        String name;
        int year;

    public:
        Media(String name, int year);
        virtual void printInformations() const = 0;
        virtual ~Media() = default;
        String getName(void) const;
        int getYear(void) const;

};

#endif
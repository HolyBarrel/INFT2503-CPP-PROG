#ifndef COMPILATOR_H
#define COMPILATOR_H

#include <string> 
using namespace std; 

class Compilator
{
    public:
        virtual ~Compilator() {}
        virtual string build() const = 0;
};

#endif
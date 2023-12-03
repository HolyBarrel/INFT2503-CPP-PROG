#ifndef PL_H
#define PL_H

#include <string>
#include <memory>
#include "Compilator.h"
using namespace std; 

class ProgrammingLanguage
{
    public: 
        ProgrammingLanguage() {}
        ProgrammingLanguage(unique_ptr<Compilator> build) : builder(move(build)) {}

        virtual string print_line(string string_to_print) const = 0;
        virtual string for_each(string element_name, string vector_name) const = 0;
        string build() const 
        {
            return builder->build();
        }
    private: 
        unique_ptr<Compilator> builder;

};

#endif
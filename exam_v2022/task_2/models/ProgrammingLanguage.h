#ifndef PL_H
#define PL_H

#include <string>
using namespace std; 

class ProgrammingLanguage
{
    public: 
        virtual string print_line(string string_to_print) const = 0;
        virtual string for_each(string element_name, string vector_name) const = 0;
};

#endif
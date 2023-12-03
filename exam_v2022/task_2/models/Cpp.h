#ifndef CPP_H
#define CPP_H

#include "ProgrammingLanguage.h"
#include <iostream>
using namespace std; 

class Cpp : public ProgrammingLanguage
{
    public: 
        string print_line(string string_to_print) const
        {
             return "cout << '" + string_to_print + "' << endl;\n";
        }
        string for_each(string element_name, string vector_name) const
        {
            return "for (auto &" + element_name + ": " + vector_name + ") {}\n";
        }
};

#endif
#ifndef CPP_H
#define CPP_H

#include "ProgrammingLanguage.h"
#include "Compilator.h"
#include <iostream>
using namespace std; 

class Cpp : public ProgrammingLanguage
{
    public: 
        Cpp() {}
        Cpp(unique_ptr<Compilator> build) : ProgrammingLanguage (move(build)) {} 

        string print_line(string string_to_print) const override
        {
             return "cout << '" + string_to_print + "' << endl;\n";
        }
        string for_each(string element_name, string vector_name) const override
        {
            return "for (auto &" + element_name + ": " + vector_name + ") {}\n";
        }
};

#endif
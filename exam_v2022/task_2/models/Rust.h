#ifndef RUST_H
#define RUST_H

#include "ProgrammingLanguage.h"
#include "Compilator.h"
#include <iostream>
using namespace std; 

class Rust : public ProgrammingLanguage
{
    public: 
        Rust() {}
        Rust(unique_ptr<Compilator> build) : ProgrammingLanguage (move(build)) {} 

        string print_line(string string_to_print) const override
        {
            return "println!('" + string_to_print + "');\n";
        }

        string for_each(string element_name, string vector_name) const override
        {
            return "for " + element_name + " in &" + vector_name + " {}\n";
        }
};

#endif
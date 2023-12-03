#ifndef RUST_H
#define RUST_H

#include "ProgrammingLanguage.h"
#include <iostream>
using namespace std; 

class Rust : public ProgrammingLanguage
{
    public: 
        string print_line(string string_to_print) const
        {
            return "println!('" + string_to_print + "');\n";
        }
        string for_each(string element_name, string vector_name) const
        {
            return "for " + element_name + " in &" + vector_name + " {}\n";
        }
};

#endif
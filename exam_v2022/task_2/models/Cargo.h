#ifndef CARGO_H
#define CARGO_H

#include "Compilator.h"

class Cargo : public Compilator
{
    public:
        string build() const override
        {
            return "cargo build\n";
        }
};

#endif
#ifndef CMAKE_H
#define CMAKE_H

#include "Compilator.h"

class CMake : public Compilator
{
    public:
        string build() const override
        {
            return "cmake --build .\n";
        }
};

#endif
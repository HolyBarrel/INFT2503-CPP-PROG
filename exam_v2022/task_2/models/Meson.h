#ifndef MESON_H
#define MESON_H

#include "Compilator.h"

class Meson : public Compilator
{
    public:
        string build() const override
        {
            return "meson compile -C .\n";
        }
};

#endif
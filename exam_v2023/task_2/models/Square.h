#ifndef SQUARE_H
#define SQUARE_H  


#include "Shape.h"

class Square : public Shape
{
    public:
        Square(int _width) : Shape(_width, _width) {}
};

#endif
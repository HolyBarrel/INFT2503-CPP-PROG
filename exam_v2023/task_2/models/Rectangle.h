#ifndef RECT_H
#define RECT_H  


#include "Shape.h"

class Rectangle : public Shape
{
    public:
        Rectangle(int _width, int _height) : Shape(_width, _height) {}
};

#endif
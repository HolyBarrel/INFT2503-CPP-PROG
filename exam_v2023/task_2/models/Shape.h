#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
    public:
        Shape(int _width, int _height) : width(_width), height(_height) {}
        virtual ~Shape() {}
        double get_area() {
            return width * height;
        }

    private: 
        int width;
        int height;
};

#endif
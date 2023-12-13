#include "models/Shape.h"
#include "models/Rectangle.h"
#include "models/Square.h"
#include <iostream>
#include <vector>
#include <memory>
using namespace std; 

int main() 
{   
    vector<unique_ptr<Shape>> shapes;
    shapes.emplace_back(new Square(10));
    shapes.emplace_back(new Rectangle(10, 4));
    for (auto &shape : shapes)
    cout << shape->get_area() << endl;
    return 0;
}
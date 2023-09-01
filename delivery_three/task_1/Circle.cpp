#include "Circle.h"

//Changes are described in the comments

Circle::Circle(double radius_) : radius(radius_) {} //Removed public identifier
//Switched radius_ and radius since private member attr of Circle is called "radius"

const double Circle::PI = 3.141592; //Added pi to definition of Circle

double Circle::get_area() const { //Added const and double keyword to reflect declaration
  return PI * radius * radius;
}

double Circle::get_circumference() const { //Added return type double
  return 2.0 * PI * radius; //Removed unnecessary variable
}

#ifndef CIRCLE_H
#define CIRCLE_H

//Changes are described in the comments

class Circle {
  public:
    Circle(double radius_); //Capitalized first letter of Circle constructor
    
    static const double PI;
    
    double get_area() const; //Should return double, not int
    double get_circumference() const;
  private: //Added :
    double radius;
}; //Added ;
#endif

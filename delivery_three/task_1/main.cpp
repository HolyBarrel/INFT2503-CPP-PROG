#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
    Circle circleA(1);
    Circle circleB(4);
    
    cout << "Testing Circle class: " << endl << endl;
    
    cout << "Circle A area: " << circleA.get_area() << endl;
    cout << "Circle A circumference: " << circleA.get_circumference() << endl << endl;

    cout << "Circle B area: " << circleB.get_area() << endl;
    cout << "Circle B circumference: " << circleB.get_circumference() << endl;
  
  return 0;
}

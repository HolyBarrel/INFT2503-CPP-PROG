#include <iostream>
#include "Circle.h"
using namespace std;

//Basically did all of task 2 by doing task 1.
//This is rewritten to accommodate the task 2 description.

int main()
{
    Circle circle(5);
    
    double area = circle.get_area();
    cout << "Arealet er lik " << area << endl;
    
    double circumference = circle.get_circumference();
    cout << "Omkretsen er lik " << circumference << endl;
      
  return 0;
}

#include "Set.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {

  //Point 1
  cout << "Point 1:" << "Using default constructor" << endl;
  Set set1;
  
  Set set2({1, 2, 3, 4, 5});

  cout << "set1: " << set1 << endl;
  cout << "set2: " << set2 << endl;
  

  //Point 2

  cout << "Point 2:" << "Using operator+ to find the union of two sets" << endl;
  Set set3 = set1 + set2;

  cout << "set3: " << set3 << endl;


  //Point 3

  cout << "Point 3:" << "Using operator+ to add an integer element to the set" << endl;
  Set set4 = set3 + 6;
  Set set5 = 8 + set4;
  Set set6 = 8 + set5;

  cout << "set4: " << set4 << endl;
  cout << "set5: " << set5 << endl;
  cout << "set6: " << set6 << endl; 

  //Point 4

  cout << "Point 4:" << "Using operator= to assign a set to another set" << endl;
  Set set7 = set6;

  cout << "set7: " << set7 << endl;





  

  return 0;
}

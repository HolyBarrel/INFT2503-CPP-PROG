#ifndef SET_H
#define SET_H

#include <vector>
#include <iostream>
using namespace std;

class Set {
public:
  vector<int> set_vector;

  Set();
  Set(vector<int> set_vector);
  Set operator+(const Set &other) const; //Signifies finding the union
  Set operator+(int other) const; //Signifies adding an integer element to the set
  Set &operator=(const Set &other); //Signifies assigning a set to another set
};

//Additional declaration
Set operator+(int integer, const Set &other); //Signifies adding an integer element to the set

ostream &operator<<(ostream &os, const Set &other); //Signifies printing the set

#endif
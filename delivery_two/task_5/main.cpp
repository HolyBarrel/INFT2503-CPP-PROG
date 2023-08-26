#include <iostream>
using namespace std;

int main()
{
  double number;
  
  double *pointer = &number;
  
  double &ref = number;
  
  //3 ways to change the value of the variable `number`
  
  //1
  number = 1;
  
  cout << "After regular double assignment: " << number << endl;
  
  *pointer = 2;
  
  cout << "After deref of pointer to change number: " << number << endl;
  
  ref = 3;
  
  cout << "After using `ref` to reference variable: " << number << endl;
  
  
  return 0;
}

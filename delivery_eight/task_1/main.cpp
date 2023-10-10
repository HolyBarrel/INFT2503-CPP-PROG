#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

template <typename Type>
bool equal(Type a, Type b);

bool equal(double a, double b);

int main() {

  int first = 1; 
  int second = 2;
  double third = 2.001;
  string fourth = "1";
  string fifth = "1";
  double sixth = 0.01;
  double seventh = 2.00100000001;

  cout << "Testing with template version:" << boolalpha << endl << endl
  << "var1 *datatype* \tvar2 *datatype* \tresult of equal(var1, var2) *bool*" << endl
  << first << "  *int*\t\t" << second << "  *int*\t\t" << equal(first, second) << endl
  << fourth << "  *string*\t\t" << fifth << "  *string*\t\t" << equal(fourth, fifth) << endl << endl;

  cout << "Testing with double version:" << boolalpha << endl << endl
  << "var1 *datatype* \tvar2 *datatype* \tresult of equal(var1, var2) *bool*" << endl
  << third << "  *double*\t\t" << fixed << setprecision(11) << seventh << "  *double*\t" << setprecision(3) << equal(third, seventh) << endl
  << third << "  *double*\t\t" << sixth << "  *double*\t\t" << equal(third, sixth) << endl;


  return 0;
}

template <typename Type>
bool equal(Type a, Type b)
{
  //cout << endl << "The template version was used on the parameters " << a << " and " << b <<endl;
  return a == b; //Based on the assumption in the task that the == operator is defined for the two types
}

bool equal(double a, double b)
{
  //cout << endl << "The double version was used on the parameters " << a << " and " << b << endl;
  return abs(a-b) < 0.00001;
}
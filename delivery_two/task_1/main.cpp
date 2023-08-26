#include <iostream>
using namespace std;

int main()
{
  int i = 3;
  int j = 5;
  int *p = &i;
  int *q = &j;
  
  cout << "The variable 'i' has the value: "  << i <<
  " and address: " << &i << endl << endl;
  
  cout << "The variable 'j' has the value: "  << j <<
  " and address: " << &j << endl << endl;
  
  cout << "The variable 'p' has the value: "  << p <<
  " and address: " << &p << endl << endl;
  
  cout << "The variable 'q' has the value: "  << q <<
  " and address: " << &q << endl << endl;
  
  *p = 7; //the value of the pointed to variable (i) is now 7
  
  *q += 4; //the value of j is incremented by 4
  *q = *p + 1; //pointer q is set to the value 7 (line 23)
  //and incremented to become 8
  
  p = q; //q is assigned to p
  cout << "p*: "<< *p << " | q*: " << *q << endl;
  
  
  
  return 0;
}

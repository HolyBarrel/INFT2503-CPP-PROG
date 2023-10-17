#include <iostream>
#include "Pair.h"

using namespace std;

//Forutsetter at det første paret har henholdsvis T1 og T2 av korresponderende typer som det andre paret.
//Forutsetter at T1 og T2 har operator+ definert.
//Forutsetter at T1 og T2 har operator> definert.

int main() {
  Pair<double, int> p1(3.5, 14);
  Pair<double, int> p2(2.1, 7);
  cout << "p1: " << p1.first << ", " << p1.second << endl;
  cout << "p2: " << p2.first << ", " << p2.second << endl;

  if (p1 > p2)
    cout << "p1 er størst" << endl;
  else
    cout << "p2 er størst" << endl;

  auto sum = p1 + p2;
  cout << "Sum: " << sum.first << ", " << sum.second << endl;
}
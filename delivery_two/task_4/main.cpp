#include <iostream>
using namespace std;

int main()
{
  
  int a = 5;
  // int &b; Error:declaration of reference variable 'b' requires an initializer
 //Referansen `&b` kan ikke initialiseres uten å faktisk referere til noe.
 //Dette forklares ganske godt av det faktum at det skal referere til noe som allerede eksisterer, herav ordet `referanse` *1
 //Videre er feilen også forklart av denne linjen i Leksjon :
 //"En referanse er et ekstra navn på en allerede *eksisterende* variabel."
 
 //FIX:
 int &b = a; //her kan b da brukes som et ekstra navn på variabelen a, siden b refererer til a
 
 cout << "FIX: int &b = a;" << endl; 
 cout << "Dette er referanse b: " << b << endl << endl;
 
 int *c;
  c = &b;
  cout << "int *c;" << endl
  << "c = &b;" << endl;
  
  cout << "Dette er peker c: " << *c << endl << endl;
  
  //*a = *b + *c; Error:indirection requires pointer operand ('int' invalid)
  //Grunnen til at dette feiler er at hverken a eller b en pekere, og at pekerene -> a* og b* ikke er definert i denne konteksten
  //Her er a en int, ikke en peker. b er en referanse til en int, ikke en peker
  //Dermed kan de ikke dereferenseres slik pekere kan.
  
  //FIX: bytte ut a og b med variabelnavnene
  a = b + *c;
  cout << "Fix: a = b + *c;" << endl;
  cout << "Før hadde a en verdi på 5, nå er dette verdien til a: " << a << endl << endl;
  
  //&b = 2; Error:expression is not assignable
  //Feiler fordi det forsøkes å endre adressen til referansen, men da kan ikke referansen referere til noe spesifikt lenger,
  //og av samme grunn *1 kan ikke referansen endre sin adresse på denne måten
  b = 2;
  
  cout << "FIX: b = 2;" << endl;
  cout << "Verdi b: " << b << endl << endl;
  
  return 0;
}

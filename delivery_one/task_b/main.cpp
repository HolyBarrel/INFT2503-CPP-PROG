#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
  const int length = 5;
  int counter = 1;
  int bTen = 0;
  int aTwenty = 0;
  
  const char filename[] = "../temperatures.txt";
  ifstream file;       
  file.open(filename);
  if (!file) {         
    cout << "Could not open the read file. Please retry" << endl;
    exit(EXIT_FAILURE); 
  }

  double currentInput;

  while (file >> currentInput) { 
   cout << "Temperature nr " << counter << ": " << currentInput << endl;
    if(currentInput < 10)
    {
      bTen++;
    }
    else if(currentInput > 20)
    {
      aTwenty++;
    }
    counter++;
  }
  file.close();
    
  cout << endl << "Temperature range | Amount of days"  << endl << endl
  << "\t < 10 \t  | \t" << bTen << endl << endl
  << "10 <= T <= 20 \t  | \t" << length - bTen - aTwenty << endl << endl
  << "\t > 20 \t  | \t" << aTwenty << endl << endl;
  
  return 0;
}

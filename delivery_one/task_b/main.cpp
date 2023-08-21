#include <cstdlib>
#include <fstream>
#include <iostream>
#include <limits>
using namespace std;

void read_temperatures(double temperatures[], int length);

int main()
{
  int lengthInput;
  bool run = true;
  
  while(run) {
    cout << "Please enter an int to select as many days' temperatures from the file (range 1 - 10):" << endl;
    
    if(cin >> lengthInput && lengthInput > 0 && lengthInput < 11)
    {
      double temperatures[lengthInput];
      read_temperatures(temperatures, lengthInput);
      run = false;
    }
    else {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Detected wrongful input, please try again" << endl << endl;
      continue;
    }
  }
  
  return 0;
}


void read_temperatures(double temperatures[], int length)
{
  int counter = 0;
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
  
  while (file >> currentInput && counter < length) {
    temperatures[counter] = currentInput;
     
    counter++;
  }
  
  file.close();
    
  for(int i = 0; i < length; i++)
  {
    cout << "Temperature nr " << i+1 << ": " << temperatures[i] << endl;
    if(temperatures[i] < 10)
    {
      bTen++;
    }
    else if(temperatures[i] >= 20)
    {
      aTwenty++;
    }
  }
    
  cout << endl << "Temperature range | Amount of days"  << endl << endl
  << "\t < 10 \t  | \t" << bTen << endl << endl
  << "10 <= T < 20 \t  | \t" << length - bTen - aTwenty << endl << endl
  << "\t >= 20 \t  | \t" << aTwenty << endl << endl;
}

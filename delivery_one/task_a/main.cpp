#include <iostream>
#include <limits>
using namespace std;

int main()
{
  const int length = 5;
  int counter = 1;
  int bTen = 0;
  int aTwenty = 0;
  
  cout << "Program that takes user input of " << length << " days' temperatures." << endl;
  while(counter <= length)
  {
      double currentInput;
      
      cout << "Please enter a double for the temperature on day " 
      << counter << ":" << endl;
      
      if(cin >> currentInput)
      {
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
      else {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Detected wrongful input, please try again" << endl << endl;
        continue;
      }
     
  }
    
  cout << endl << "Temperature range | Amount of days"  << endl << endl
  << "\t < 10 \t  | \t" << bTen << endl << endl
  << "10 <= T <= 20 \t  | \t" << length - bTen - aTwenty << endl << endl
  << "\t > 20 \t  | \t" << aTwenty << endl << endl;
  
  return 0;
}

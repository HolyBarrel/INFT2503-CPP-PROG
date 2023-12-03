#include "models/Angle.h"
#include <iostream>
using namespace std; 

int main() 
{   
    cout << Angle<int>(30) << endl;
    cout << (Angle<int>(30) + 360) << endl;
    cout << (Angle<int>(30) + 3.14159265359) << endl;
    cout << Angle<double>(3.14159265359 / 2) << endl;
    cout << (Angle<double>(3.14159265359 / 2) + 3.14159265359) << endl;
    cout << (Angle<double>(3.14159265359 / 2) + 3) << endl;

    return 0;
}
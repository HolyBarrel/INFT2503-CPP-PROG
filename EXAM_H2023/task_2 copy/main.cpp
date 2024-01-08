#include <iostream>
#include <memory>
#include <thread>
using namespace std; 

class Hot {
public:
  friend ostream &operator<<(ostream &out, const Hot &) {
    out << "hot";
    return out;
  }
};

/// Task 2
class Cold {
public:
  friend ostream &operator<<(ostream &out, const Cold &) {
    out << "cold";
     return out;
   }
 };

 class Degrees {
 public:
     Cold operator-() const{return Cold();}

     Hot operator+() const{return Hot();}


 };

int main() 
{   
     // Task 1
     Degrees degrees;
     cout << +degrees << endl; 
     cout << -degrees << endl;

    return 0;
}

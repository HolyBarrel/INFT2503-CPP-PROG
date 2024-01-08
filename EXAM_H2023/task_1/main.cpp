#include <iostream>
using namespace std; 

int main() 

{
    //A   
    // int a = 1, b = 2;
    // swap(a, b);
    // std::cout << a << ' ' << b << std::endl;

    // std::cout << *c << ' ' << *d << std::endl; i staden for: std::cout << c << ' ' << d << std::endl;

    //C
    int a = 1, b = 2;
    auto c = &a; //C er en pointer referanse til minneplassen til a
    auto d = &b; //D er en pointer referanse til minneplassen til b

    cout << typeid(c).name() << endl;
    cout << typeid(d).name() << endl;
    cout << typeid(*c).name() << endl;
    //swap(*c, d);
    std::cout << *c << ' ' << *d << std::endl;
 
    return 0;
}

void swap(int a, int)


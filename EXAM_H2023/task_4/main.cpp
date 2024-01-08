#include <iostream>
#include "models/Car.h"
#include "models/Volvo.h"
#include "models/Saab.h"
#include "models/Electric.h"
#include "models/Gasoline.h"
#include <vector>
#include <memory>

using namespace std; 

int main() 
{   
    vector<unique_ptr<Car>> cars;

    cars.emplace_back(new Saab<Electric>());
    cars.emplace_back(new Saab<Gasoline>());
    cars.emplace_back(new Volvo<Electric>());

    for (auto &car : cars)
    cout << *car << endl;

    return 0;
}

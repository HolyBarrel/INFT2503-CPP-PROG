#ifndef VOLVO_H
#define VOLVO_H

#include "Car.h"
#include <string>
using namespace std;


template <typename Engine_Type>
class Volvo : public Car
{
    public:
        string get_brand() const override { return "Volvo"; }
        string get_engine_type() const override { return Engine_Type::get_motor_type(); }
};



#endif // VOLVO_H
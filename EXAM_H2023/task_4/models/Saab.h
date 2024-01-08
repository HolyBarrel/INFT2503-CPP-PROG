#ifndef SAAB_H
#define SAAB_H

#include "Car.h"
#include <string>
using namespace std;


template <typename Engine_Type>
class Saab : public Car
{
    public:
        string get_brand() const override { return "Saab"; }
        string get_engine_type() const override { return Engine_Type::get_motor_type(); }
};



#endif // SAAB_H
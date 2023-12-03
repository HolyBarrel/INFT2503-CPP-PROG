#ifndef ANGLE_H
#define ANGLE_H


#include <iostream> 
#include <cmath>
using namespace std; 

template <typename Type>
class Angle
{
    public: 
        Angle(int num) : number(num % 360) {}

        Angle(double num) : number(fmod(num, 3.14159265359)) {}
        
        template <typename OtherType>
        friend Angle<Type> operator+(const Angle<Type> &angle, OtherType num)
        {
            return Angle<Type>(angle.number + static_cast<Type>(num));
        }

        friend ostream &operator<<(ostream &os, const Angle<Type> &angle)
        {
            return os << angle.number;
        }

        Type number;
};

#endif
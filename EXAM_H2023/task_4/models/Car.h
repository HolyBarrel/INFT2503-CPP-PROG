#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;
class Car
{
    public: 

        virtual ~Car() = default;
        virtual string get_brand() const = 0;
        virtual string get_engine_type() const = 0;

        friend std::ostream &operator<<(std::ostream &out, const Car &car)
        {
            return out << car.get_brand() << " with " << car.get_engine_type() << " engine";
        }

};

#endif // CAR_H
#ifndef INC_08_ABSTRACT_FACTORY_CAR_FACTORY_H
#define INC_08_ABSTRACT_FACTORY_CAR_FACTORY_H

#include <string>

#include "car_factory_interface.h"

// Class forward declaration.
// Similar to function forward declarations: void sum(..);
class CarInterface;

// Concrete car factory implementation of the car factory interface
class CarFactory : public CarFactoryInterface
{
public:
    CarFactory();
    CarInterface* Create(std::string make, std::string model);

protected:
    int nextId;
    std::string GetSerial();
};


#endif //INC_08_ABSTRACT_FACTORY_CAR_FACTORY_H

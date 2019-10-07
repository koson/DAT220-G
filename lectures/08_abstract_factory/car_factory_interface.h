#ifndef INC_08_ABSTRACT_FACTORY_CAR_FACTORY_INTERFACE_H
#define INC_08_ABSTRACT_FACTORY_CAR_FACTORY_INTERFACE_H

#include <string>

class CarInterface;

// Abstract base class for every factory.
// This is how interfaces are implemented in C++.
class CarFactoryInterface
{
public:
    CarFactoryInterface() = default;
    virtual CarInterface* Create(std::string make, std::string model) = 0;
};

#endif //INC_08_ABSTRACT_FACTORY_CAR_FACTORY_INTERFACE_H

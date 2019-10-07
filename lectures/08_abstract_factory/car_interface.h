#ifndef INC_08_ABSTRACT_FACTORY_CAR_INTERFACE_H
#define INC_08_ABSTRACT_FACTORY_CAR_INTERFACE_H

#include <string>

// Abstract base class for every car.
// This is how interfaces are implemented in C++.
class CarInterface
{
protected:
    CarInterface() = default;
    CarInterface(int id, std::string serial, std::string make, std::string model) {}

public:
    int id;
    std::string serial;
    std::string make;
    std::string model;
};

#endif //INC_08_ABSTRACT_FACTORY_CAR_INTERFACE_H

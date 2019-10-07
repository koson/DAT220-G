#ifndef INC_08_ABSTRACT_FACTORY_CAR_H
#define INC_08_ABSTRACT_FACTORY_CAR_H

#include <string>

#include "car_interface.h"

// Concrete car implementation of the car interface
class Car : public CarInterface
{
    // Friends can touch each others members
    friend class CarFactory;
protected:
    Car(int id, std::string serial, std::string make, std::string model)
    {
        //if (make != "Ford")
        //    return nullptr;

        this->id = id;
        this->serial = serial;
        this->make = make;
        this->model  = model;
    }
};

#endif //INC_08_ABSTRACT_FACTORY_CAR_H

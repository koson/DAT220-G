#include <algorithm>

#include "car_factory.h"
#include "car.h"

CarFactory::CarFactory()
{
    nextId = 1;
}

CarInterface* CarFactory::Create(std::string make, std::string model)
{
    // Check for invalid parameters.
    // return nullptr on invalid parameters.
    // This factory can only build Ford cars.
    if (make != "Ford")
        return nullptr;

    // Parameters are ok, we can now create the car.
    return new Car(nextId++, GetSerial(), make, model);
}

std::string CarFactory::GetSerial()
{
    std::string serial = "xxxxxxxx";
    std::string digits = "abcd1234";

    // Assigns each element in range [first, last) a value generated by the given function object g.
    std::generate(serial.begin(), serial.end(),
            [serial, digits]{ return digits[rand() % serial.length() ]; });

    return serial;
}
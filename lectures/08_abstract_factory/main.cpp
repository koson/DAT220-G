#include <iostream>

#include "car_factory.h"
#include "car.h"

void do_something(CarFactoryInterface* factory)
{
    CarInterface* car = factory->Create("Ford", "Mondeo");
}

int main()
{
    // Direct constructor usage.
    // Simple but limited: Constructor cannot fail.
    // With a protected constructor this is not allowed.
    // Car stackCar(1, "123", "Ford", "Focus");
    // Car* heapCar = new Car(2, "678", "Mazda", "626");

    // The CarFactory class is friends with the Car class.
    // This allows CarFactory::Create to use the Car protected constructor.
    CarFactory factory;

    // Use the factory to create a car.
    // Store the car in a CarInterface pointer. This allows the car class to be replaced.
    CarInterface* car1 = factory.Create("Ford", "Focus");

    // Check if the car was created successfully
    if (car1)
        std::cout << "Ford created successfully." << std::endl;
    else
        std::cout << "Failed to create Ford." << std::endl;

    // Use the factory to create a car
    CarInterface* car2 = factory.Create("Mazda", "626");

    // Check if the car was created successfully
    if (car2)
        std::cout << "Mazda created successfully." << std::endl;
    else
        std::cout << "Failed to create Mazda." << std::endl;

    // Use a pointer to the factory interface.
    // The factory must be stored on the heap because the base class is abstract.
    CarFactoryInterface* factory2 = new CarFactory();

    CarInterface* car3 = factory2->Create("Ford", "Mustang");

    // Send factory as a parameter to function using dependency injection.
    // The factory being used can now be replaced in main without changing the function.
    do_something(factory2);

    return 0;
}
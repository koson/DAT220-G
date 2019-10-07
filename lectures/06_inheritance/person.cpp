#include <iostream>

#include "person.h"

void Person::print()
{
    std::cout
            << "id: " << id << std::endl
            << "name: " << name << std::endl
            << "address: " << address << std::endl
            << "birth: " << birth << std::endl;
}

Person::Person(int id, std::string name, std::string address, std::string birth)
{
    this->id = id;
    this->name = name;
    this->address = address;
    this->birth = birth;
}

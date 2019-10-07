#ifndef INC_06_INHERITANCE_PERSON_H
#define INC_06_INHERITANCE_PERSON_H

#include <string>

// struct: Same as a class, but: everything is public
class Person
{
// public: Accessible from everywhere
// protected: Accessible from this class and derived classes
// private: Only accessible from this class, not derived classes
public:
    Person() {}
    Person(int id, std::string name, std::string address, std::string birth);

     virtual void print();

    int id;
    std::string name;
    std::string address;
    std::string birth;
};


#endif //INC_06_INHERITANCE_PERSON_H

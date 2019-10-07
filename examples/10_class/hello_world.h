/*
 * Contains declaration of class HelloWorld
 */

#ifndef HELLO_WORLD_H
#define HELLO_WORLD_H

#include <string>
#include <ostream>

// Class storing a string
class HelloWorld
{
public:
    // Constructors
    HelloWorld();
    HelloWorld(std::string s);

    // Const member functions can not change the object
    std::string Get() const;

    // Regular member functions can
    void Set(std::string s);

    // Conversion operator. Must be member
    operator std::string() const;

protected:
    std::string text;
};

// Arithmetic operators. These could have been members also.
// & means pass by reference instead of copy, more on this later.
HelloWorld operator+(const HelloWorld& hw1, const HelloWorld& hw2);
void operator+=(HelloWorld& hw1, const HelloWorld& hw2);

// Stream operator. Prints object to stream.
std::ostream& operator<<(std::ostream& stream, const HelloWorld& hw);

#endif

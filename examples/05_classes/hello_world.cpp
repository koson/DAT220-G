/*
 * Contains definition/implementation of class HelloWorld
 *
 * this-> isn't required to access text, but it's often
 * used to make it clear you are accessing a member variable.
 */

#include <string>
#include <ostream>

#include "hello_world.h"

HelloWorld::HelloWorld()
{
    this->text = "Hello, world!";
}

HelloWorld::HelloWorld(std::string s)
{
    this->text = s;
}

std::string HelloWorld::Get() const
{
    return this->text;
}

void HelloWorld::Set(std::string s)
{
    this->text = s;
}

HelloWorld::operator std::string() const
{
    return Get();
}

HelloWorld operator+(const HelloWorld& hw1, const HelloWorld& hw2)
{
    return HelloWorld(hw1.Get() + hw2.Get());
}

void operator+=(HelloWorld& hw1, const HelloWorld& hw2)
{
    hw1.Set(hw1.Get() + hw2.Get());
}

std::ostream& operator<<(std::ostream& stream, const HelloWorld& hw)
{
    stream << hw.Get() << std::endl;
    return stream;
}

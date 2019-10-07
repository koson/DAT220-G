#include <iostream>

#include "point.h"

Point::Point()
{
    std::cout << "Constructing base" << std::endl;

    x = y = 0;
}

Point::Point(int x, int y)
{
    std::cout << "Constructing base with arguments" << std::endl;

    this->x = x;
    this->y = y;
}

Point::~Point()
{
    std::cout << "Destructing base" << std::endl;
}

int Point::Calc()
{
    std::cout << "Point::Calc()" << std::endl;
    return x + y;
}

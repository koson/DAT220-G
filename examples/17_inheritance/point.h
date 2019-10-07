#ifndef POINT_H
#define POINT_H

// Base class
class Point
{
public:

    // Base class default constructor
    Point();

    // Base class constructor with arguments
    Point(int x, int y);

    // Virtual destructor: Important! If not freeing Point* pointers
    // could leak memory if child classes allocate any
    virtual ~Point();

    // Virtual: Ensures that the right version is called on Point* pointers
    // and Point& references
    virtual int Calc();

    int x, y;
};

#endif

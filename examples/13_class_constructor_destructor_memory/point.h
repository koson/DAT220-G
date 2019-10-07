#ifndef POINT_H
#define POINT_H


class Point
{
public:
    // Constructor with no arguments
    Point();

    // Destructor, frees memory allocated in the constructor
    ~Point();

    // Copy constructor. Called anywhere a copy is to be made.
    // E.g.: Argument to function, returned value from function
    Point(const Point& p);

    // Assignment operator. Used for assignment (orly)
    // Note: Almost the same as the copy constructor
    Point& operator=(const Point& p);

    int x, y;

protected:
    // Common init function for the constructors
    void init();

    // Common deep copy code used by the copy constructor and the assignment operator
    void deepCopy(const Point& p);

    // Defines the size of the internal buffer
    static const int bufferSize = 512;

    // Pointer to buffer memory
    char* buffer;
};

#endif

/*
 * Contains implementation of template class Print
 */

#ifndef PRINT_H
#define PRINT_H

/*
 * Template class that stores a value of any type and can
 * print that value to std::cout.
 */
template <class T>
class Print
{
public:
    // Constructor takes one argument of the template type
    Print(const T& value)
    {
        this->value = value;
    }

    /*
     * Regular function with no argument, prints value.
     * const meaning it can't change the object itself.
     */
    void doSomething() const
    {
        std::cout << value << std::endl;
    }

protected:
    // Template variable to store value
    T value;
};

#endif

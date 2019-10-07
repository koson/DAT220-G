/*
 * Shows how to create a template function
*/

#include <iostream>
#include <string>

// Template function that prints anything to std::cout
template <class T>
void print(const T& what)
{
    std::cout << what << std::endl;
}

/*
 * Template function that returns the sum of two anythings.
 * Note that the two arguments must be of the same type.
 * There will be a build error if you try to add two things with no defined operator+.
 */
template <class T>
T add(const T& arg1, const T& arg2)
{
    return arg1 + arg2;
}

int main()
{
    // Use function to print an int, implicit type
    print(5);

    // Use function to print an int, explicit type
    print<int>(5);

    // Use function to print a literal string (char array)
    print("Hello, char array!");

    // Use function to print string object
    print(std::string("Hello, String!"));

    // Add two floats with the generic add and send the result to the generic print
    print(add(123.45, 567.89));

    return 0;
}

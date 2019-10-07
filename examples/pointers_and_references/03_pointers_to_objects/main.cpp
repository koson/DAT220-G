/*

Shows how to create and use pointers to objects

Note that this project gets a warning about an unused variables.
This is to be expected as it is in fact unused.

*/

#include <iostream>
#include <string>

int main()
{
    // Create a string
    std::string text = "Hello, World!";

    // Create pointer to string object
    std::string* pText = &text;

    // Change second char using pointer, notice the parenthesis
    // used when dereferencing
    (*pText)[1] = 'o';

    // Print original object, which has changed
    std::cout << text << std::endl;

    // Get length using pointer, notice the -> operator to access members
    std::size_t length = pText->length();

    return 0;
}

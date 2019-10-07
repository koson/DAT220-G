/*

Shows how to use pointers to array elements.
Shows how to increment pointers to point to the next element.

*/

#include <iostream>

int main()
{
    // Create char array
    char s[] = "Hello, World!";

    // Create pointer to first element
    char* c = s;

    // Print until what c points to is 0 (end of string)
    while(*c != 0)
    {
        // Print char pointed to, then increment pointer
        std::cout << *c++;
    }

    std::cout << std::endl;

    return 0;
}

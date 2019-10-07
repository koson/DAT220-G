/*

Shows how to manipulate strings as char arrays.
This is the same way it is done in C.

Note that this project gets two warnings about unused variables.
This is to be expected as they are in fact unused.

*/

#include <iostream>

// Headers from the C standard library start with 'c'
#include <cstring>

int main()
{
    // Create array, note that we do not define
    // size when supplying a string literal.
    char s[] = "Hello, world!";

    // Read the first character
    char c = s[0];
    // c is now 'H'
    // Note: The compiler gives us a warning that c is unused. This is often useful information.

    // Read the length of the string
    size_t length = strlen(s);
    // Length is now 13
    // Note: The compiler gives us a warning that length is unused. This is often useful information.

    // Set first character to 'o'
    s[0] = 'o';
    // s is now "oello, world!";

    // Create two char arrays
    char s1[] = "one ";
    char s2[] = "two";

    // Create a char array to store the result.
    // This initializer sets all values to 0.
    char s3[10] = { 0 };

    // Append both strings into s3
    strcat(s3, s1);
    strcat(s3, s2);
    // s3 is now "one two"

    // Increment the first value of s3
    s3[0]++;
    // s3 is now "pne two"

    return 0;
}

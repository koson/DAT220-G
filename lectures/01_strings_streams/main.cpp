#include <iostream>
#include <string>

int main()
{
    // Create two integers on the stack (memory area), same as C
    int num1 = 3;
    int num2 = 7;

    // Streams use the << operator to output text and variables
    std::cout << "Hello, World! " << num1 << " != " << num2 << std::endl;

    // Variable to store input
    int input;

    // Read input to variable using operator >>
    std::cout << "Enter an integer: ";
    std::cin >> input;

    // Output the number that was written
    std::cout << "You entered: " << input << std::endl;

    // Old style C strings still work
    char string[] = "Hello, World!";
    string[0]++;

    // Output old C string with new std::cout <<
    std::cout << "The C string is: " << string << std::endl;

    // Create a C++ string on the stack
    std::string string2 = "Hello, world!";

    // Append text to the C++ string with the += operator
    string2 += " Yep yep.";

    // Print the resulting C++ string
    std::cout << "The C++ string is: " << string2 << std::endl;

    // Print the length of the string using the member function .length()
    std::cout << "The length of the string is: " << string2.length() << std::endl;

    // Print position of text searched for in string
    std::cout << "Position of found text is: " << string2.find("Yep") << std::endl;
    std::string needle = "Yep";
    std::cout << "Position of found text is: " << string2.find(needle) << std::endl;

    return 0;
}

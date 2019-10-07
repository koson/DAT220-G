/*

Shows how to allocate and free variables on the heap using new and delete.
Shows how to manage allocated memory using pointers.

*/

#include <iostream>
#include <string>

int main()
{
    // Allocate an integer on the heap, initialize to 0
    int* pInt = new int(0);

    // Print current value (0)
    std::cout << "Initial value: " << *pInt << std::endl;

    // Change value
    *pInt = 41 + 1;

    // Print out changed value (42)
    std::cout << "Changed value: " << *pInt << std::endl;

    // Free memory. If you don't do this you leak memory until the process closes!
    delete pInt;

    // Good practice is to set the pointer to 0 after deleting it
    // in case you accidentally read or write it later.
    pInt = nullptr;

    // Allocate string on heap, note that std::string internally heap
    // allocates space needed for the actual text.
    std::string* pString = new std::string("Hello");
    
    // Append to string by accessing member with -> operator
    pString->append(", world!");

    // Print string value
    std::cout << "String value: " << *pString << std::endl;

    // Free string. This calls the internal instructor which frees
    // the memory the string object has allocated internally.
    delete pString;

    // After freeing a pointer always assign 0 to it. This will prevent
    // the application from accessing freed memory if you accidentally
    // do it in the code afterwards. This is called a null pointer.
    pString = 0;

    // C++11 added nullptr, the null pointer literal. This is preferred
    // over using 0 or NULL. Use it when support is available.
    pString = nullptr;

    return 0;
}

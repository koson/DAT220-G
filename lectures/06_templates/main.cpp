#include <iostream>
#include <vector>
#include <map>

// Regular function.
// Argument types and return value is locked to int.
// This function can not add two floats (or anything else).
int sum (int num1, int num2)
{
    return num1 + num2;
}

// Template (generic) function.
// types and return value depends on the type of the arguments.
template <class T>
// template <typename T> // Alternate "spelling". Result is identical.
T sumGeneric (const T& num1, const T& num2)
{
    // Function uses operator+.
    // Thus: Function works for any type that has operator+ defined.
    return num1 + num2;
}

// Create a template class.
// T can be used for return types, arguments, variables, members etc,
// any place a regular type can be used.
template <class T>
class Storage
{
public:
    Storage(const T& value)
    {
        this->value = value;
    }

    void print()
    {
        std::cout << "The value is: " << value << std::endl;
    }

    // Member variable of type T.
    // If T is int value is an int, and so on.
    T value;
};

int main() {
    // From earlier: Use the std::vector class template with int as the type (T)
    std::vector<int> numbers;

    // Map is the same, but with two types.
    // These types are used T and U in the class itself.
    std::map<int, std::string> names;

    // Call the template function with implicit type.
    // Type is deduced (type deduction) from arguments.
    int result = sumGeneric(6, 7);

    float result2 = sumGeneric(43.48, 21.76);

    // Explicit type.
    // Type is given with the name of the function
    float result3 = sumGeneric<int>(8, 2);

    // Calling the template function with different typed arguments is not allowed.
    // T must be the same type so this gives a compile error.
    // float result = sumGeneric(5, 7.3);

    // Use our template class with int as T.
    // T must be defined.
    Storage<int> intStorage(5);

    // Use the same template to store a string
    Storage<std::string> stringStorage("Hello");

    return 0;
}
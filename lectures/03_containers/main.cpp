#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <map>

int main()
{
    // Bare array, like in C. For comparison. Constant size.
    int numberArray[30];

    // Declare a variable of type vector<int>.
    // Vector: Behaves internally as an array.
    // Implements: operator[] for lookups.
    // Pros: Item lookup is instant. Suited for anything that requires random access.
    // Cons: Needs to resize if there is no more space for the value you are inserting
    // In other words: Not well suited for huge data sets with many inserts
    std::vector<int> numbers;

    // Add some numbers to the vector. Added to the back as the name implies.
    numbers.push_back(4);
    numbers.push_back(8);
    numbers.push_back(3);

    // Inserts in a vector at other positions than the back resizes and moves all elements
    numbers.insert(std::next(numbers.begin(), 1), 9);

    int num1 = numbers[1];

    // Access invalid index.
    // Behaves just like accessing an array out of bounds.
    // Possible crash or unknown value.
    // You can use .at() to get an exception if the index does not exist.
    // int num7 = numbers[7];

    // Iterate vector using "traditional" counter based for loop
    for (int i = 0; i < numbers.size(); i++)
        std::cout << "Value in position " << i << " is " << numbers[i] << std::endl;

    // Iterate vector using a range-based for loop.
    // Value is a const reference to the current value of each loop iteration
    for (const int& value: numbers)
        std::cout << "Value is " << value << std::endl;

    // Alternatively using auto.
    // & creates a reference to prevent copying each value.
    for (const auto& value: numbers)
        std::cout << "Value is " << value << std::endl;

    // Main alternative to a vector: The list class.
    // Pros: Does not need to resize on inserts.
    // Cons: Item lookup is linear. At worst: Iterate half the elements,
    // or all if starting from the beginning.
    // Makes sense to use when the program usually iterates all elements to use/modify them.
    std::list<int> numbers2;

    numbers2.push_back(5);
    numbers2.push_back(9);
    numbers2.push_back(2);

    // Inserts at random positions does not copy data.
    // But: Requires seeking to that position.
    numbers2.insert(std::next(numbers2.begin(), 1), 8);

    // Lists do not have operator[].
    // Must use range based for or iterators.
    for (const auto& value: numbers2)
        std::cout << "Value is " << value << std::endl;

    // Or you can use an iterator.
    // An iterator is an object that contains the location inside a container.
    // Incrementing the iterator forwards it to the next value.
    // You can get constant iterators with the .cbegin() and .cend() functions.
    for (auto it = numbers2.begin(); it != numbers2.end(); it++)
        std::cout << "Value is " << *it << std::endl;

    // Sum all numbers in the list
    int sum = std::accumulate(numbers2.begin(), numbers2.end(), 0);
    std::cout << "Sum of numbers2 is " << sum << std::endl;

    // Find specific position:
    // Start with begin()
    // Then forward to the given position
    auto it = std::next(numbers2.begin(), 2);

    // std::map: Used when the index is not an integer, or has "holes".
    // Also called a dictionary.
    // Lookups are done with a key, results in a value
    // std::map uses operator< to sort values
    std::map<int, std::string> names;

    names[9] = "Knut";
    names[3] = "Lise";
    names[23] = "Amed";

    // Iterate map with range-based for
    for (const auto& pair: names)
        std::cout << "Key " << pair.first << " has value " << pair.second << std::endl;

    // Iterate map with const iterator
    for (auto it = names.cbegin(); it != names.cend(); it++)
        std::cout << "Key " << it->first << " has value " << it->second << std::endl;

    // Values in a map are default initialized
    std::map<std::string, int> ages;

    ages["Knut"] = 5;
    ages["Lise"] = 13;

    // Value is default initialized (for an int: 0), then incremented
    ages["Bjart"]++;

    for (const auto& pair: ages)
        std::cout << "Person " << pair.first << " is " << pair.second << " years old" << std::endl;

    // For comparison: Bare ints are not default initialized
    int notInitalized;
    std::cout << "Uninitialized value: " << notInitalized << std::endl;

    return 0;
}

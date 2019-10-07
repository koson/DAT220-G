/*

Shows how to allocate and free arrays on the heap

*/

#include <iostream>

int main()
{
    // Constant with array size
    const int size = 10;

    // Allocate an array of 'size' ints on the heap
    int* pInts = new int[size];

    // Set each value to their position, 0 = 0 and so on, then print value
    for(size_t i = 0; i < size; i++)
    {
        pInts[i] = i;
        std::cout << "Value of " << i << ": " << pInts[i] << std::endl;
    }

    // Free memory from heap using delete[]. Must use []!
    delete[] pInts;

    // Assign null pointer after delete
    pInts = nullptr;

    return 0;
}

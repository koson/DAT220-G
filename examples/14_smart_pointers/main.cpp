/*

C++11 adds a set of very useful smart pointers that automatically free the
memory pointed to once the smart pointer goes out of scope:

std::unique_ptr: Can't be copied or assigned. Strict and hard to misuse.

std::shared_ptr: Reference counted, can be copied. Memory is freed once
there are no more copies of the smart pointer.

std::weak_ptr: Weak copy of a shared_ptr. Copies of the weak_ptr type are
not counted. Used to solve more complex problems such as circular
references.

Use these when possible as it simplifies heap management.

https://en.wikipedia.org/wiki/Smart_pointer

*/

#include <memory>

// Allocates an int and keeps the address of it inside a unique pointer
void func()
{
    std::unique_ptr<int> num(new int(42));
} // Memory is freed when the unique ptr goes out of scope

// Receives a copy of a shared ptr which increments the reference count to 2
void func2(std::shared_ptr<int> num)
{

} // Memory is not freed because the reference count is still 1

// Allocates an int and keeps the address of it inside a shared pointer.
// A copy of the shared pointer is passed to func2.
void func3()
{
    std::shared_ptr<int> num(new int(42));
    func2(num);
} // Memory is freed because the last copy goes out of scope

int main()
{
    // Does not leak memory, even without a delete.
    func();
    func3();

    return 0;
}

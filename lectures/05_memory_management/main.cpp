#include <iostream>

// Declare a global variable that is initialized.
// Storage: Data segment. Grows the size of the executable.
int someGlobalVariable = 72;

// Declare a global array that is not initialized.
// Storage: BSS. Does not grow the size of the executable.
float someGlobalArray[30];

// Function arguments also go on the stack
int sum (int num1, int num2)
{
    return num1 + num2;
}

// Function arguments that are references also go on the stack.
// In this case the value on the stack is the memory address of the argument.
int sum2 (int& num1, int& num2)
{
    return num1 + num2;
}

// Function arguments that are pointers also go on the stack.
// In this case the value on the stack is the memory address of the argument.
int sum3 (int* num1, int* num2)
{
    return *num1 + *num2;
}

class Student
{
public:
    Student(std::string name)
    {
        std::cout << "Constructor is running for " << name << std::endl;

        id = -1;
        this->name = name;

        // Allocate 1 GB of data on the heap.
        // Reduce this if you don't have a lot of RAM.
        data = new int[1000000000/4];
    }

    ~Student()
    {
        std::cout << "Destructor is running for " << name << std::endl;

        delete[] data;
        data = nullptr;
    }

    int id;
    std::string name;

protected:
    int* data;
};

// Global student variable.
// Constructor runs before main().
// Destructor runs after main().
// Non-heap variables in the object end up in the data segment (or BSS)
Student globalStudent("GlobalStudent");

int main()
{
    // Local variable student.
    // Non-heap variables in the object end up on the stack.
    Student localStudent("LocalStudent");

    // if scope variable
    if (true)
    {
        // Same rules as a local variable.
        // Non-heap variables in the object end up on the stack.
        Student ifStudent("IfStudent");
    }

    // Use more stack than we have
    // int numbers[10000000];

    // Declare a local variable. Initialized or not, goes on the stack.
    int someLocalVariable = 78;

    // Call a function. Arguments are put on the stack.
    sum (6, 9);

    // We can also request memory from the heap.
    // The heap will grow to fulfill our request if there is enough memory.

    // Allocate and free an integer on the heap
    int* number = new int;
    delete number;
    // Best practice: Set freed pointers to nullptr.
    // This prevents accidental access to dangling pointers later in the program.
    number = nullptr;

    // Try to access a null pointer.
    // This will always crash the program (which is good!)
    // *number = 5;

    // Allocate an array on the heap
    int* numbers = new int[10000000];

    // Access an array on the heap using the pointer and the [] operator
    for (int i = 0; i < 10000000; i++)
        numbers[i] = i;

    // Memory allocated with new, must be manually freed with delete.
    // There are two variants: delete for variables and delete[] for arrays
    delete[] numbers;

    // Accessing heap after it has been deleted is bad (TM)
    // for (int i = 0; i < 10000000; i++)
    //    numbers[i] = i;

    // Allocate a student on the heap
    Student* heapStudent = new Student("HeapStudent");
    delete heapStudent;
    heapStudent = nullptr;

    return 0;
}
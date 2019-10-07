#include <iostream>

int main() {
    std::string name;
    int age=0;
    int thisYear = 2019;
    std::cout << "Please enter your name:\n";
    getline(std::cin, name);
    std::cout << "Hello, " << name << "!\n";
    std::cout << "Please tell me your age\n";
    std::cin >> age;
    std::cout << "You were born in " << thisYear-age << ".\n";
    std::cout << "You have left " << 100 - age << " years to turn 100.\n";
    return 0;
}

/*
Write an application that asks the user for their name and what age they are turning this year and:

Greets them with Hello, <user>!
Tells the user in which year they were born
Tells the user how many years is left until they turn 100
 */
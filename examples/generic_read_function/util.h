#ifndef UTIL_H
#define UTIL_H

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <limits>

// Usage:
// int choice = Read<int>("Please type an integer: ");
// double balance = Read<double>("Please enter account balance: ");

// General Read function used for all types except std::string (see below)
template <class T>
T Read(const std::string& prompt = "")
{
    T value;
    bool success;

    do
    {
        std::cout << prompt;

        std::string input;
        std::getline(std::cin, input);

        std::stringstream ss;
        ss << input;
        ss >> value;

        // ss.eof() ensures that all of the string stream was used
        success = std::cin.good() && ss.eof();

        if (!success)
        {
            std::cout << "Invalid input. Please try again." << std::endl;
            std::cin.clear(); // Clear std::cin error flags
        }

    } while(!success);

    return value;
}

// Template specialization, used only when T is std::string
template <>
inline std::string Read(const std::string& prompt)
{
    std::string value;
    bool success;

    do
    {
        std::cout << prompt;
        std::getline(std::cin, value);

        success = std::cin.good();

        if (!success)
        {
            std::cout << "Invalid input. Please try again." << std::endl;
            std::cin.clear(); // Clear std::cin error flags
        }

    } while(!success);

    return value;
}

void ShowTitle(const std::string& title)
{
    std::cout << std::endl;
    std::cout << std::setw((int)title.length()) << std::setfill('-') << "" << std::endl;
    std::cout << title << std::endl;
    std::cout << std::setw((int)title.length()) << std::setfill('-') << "" << std::endl << std::endl;
}

#endif //UTIL_H

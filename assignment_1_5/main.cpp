#include <iostream>
bool isSubstring(std::string str1, std::string str2)
{
    // checks if the first string is part of second one and vice versa. If this
    //condition is true, it will return true and return false if it is false.
    return (str1.find(str2) != std::string::npos) || (str2.find(str1) != std::string::npos);
}
int main() {
    std::string str, str1;
    std::cout << "Please write first string:\n";
    std::getline(std::cin, str);
    std::cout << "Please write second string:\n";
    std::getline(std::cin, str1);
    if(str==str1)
        std::cout << "The strings are equal.\n";
    else
        std::cout << "The strings are not equal.\n";

    if(isSubstring(str,str1))
        std::cout << "is a substring.\n";
    else
        std::cout << "is not a substring.\n";
    return 0;
}








/*
Write an application that asks for two strings and:
Tells if the strings are equal or not
Tells if one string is a substring of the other
*/
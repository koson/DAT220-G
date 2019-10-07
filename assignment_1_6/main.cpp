#include <iostream>
#include <algorithm>

int main() {
    std::string str;
    std::cout << "Please write a string:" << "\n";
    std::getline(std::cin, str);
    // first turn all characters in the given string into lower case
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for (char ch = 'a'; ch <= 'z' ; ++ch) {
        std::cout << "'" << ch << "' : " << std::count(str.begin(), str.end(), ch)<< "\n";
    }
    return 0;
}

/*
Write an application that asks for a string and:
• Tells how many times each character of the alphabet appears in the string
 */
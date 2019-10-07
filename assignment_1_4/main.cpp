#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

int main() {
    std::string str, strUpper, strLower;
    std::cout << "Please enter a string\n";
    std::getline(std::cin,str);
    strUpper = str;
    strLower = str;
    transform(strUpper.begin(), strUpper.end(), strUpper.begin(), ::toupper);
    transform(strLower.begin(), strLower.end(), strLower.begin(), ::tolower);
    std::cout << "The string in upper case is " << strUpper << "\n";
    std::cout << "The string in lower case is " << strLower << "\n";

    size_t inBetween = str.length()/2; // split the string into two
    std::string firstPart = str.substr(0, inBetween);
    std::string secondPart = str.substr(inBetween);
    std::cout << "The string split in two is: " << firstPart << " - " << secondPart << "\n";

    std::stringstream ss, ss1;
    // insert entered into string streams
    ss << str;
    ss1 << str;
    int myInt = 0;
    double myDouble = 0.0;
    // Read string streams as integer and double
    ss >> myInt;
    ss1 >> myDouble;

    if(!ss.fail()) std::cout << "Square of int is: " << myInt*myInt<< "\n";
    else std::cout <<"The string you have entered, cannot be read as integer.\n";

    if(!ss1.fail()) std::cout << "half of double is: " << myDouble/2 << "\n";
    else std::cout <<"The string you have entered, cannot be read as double. \n";

    return 0;
}



/*
Write an application that asks for a string as input and:
Prints the string in uppercase and lowercase
Splits the string on the middle and prints the two parts with " - " between
Tries to convert it into an integer and prints out the square of it if it is a number
Tries to convert it into a double and prints out half it's value if it is a number
 */
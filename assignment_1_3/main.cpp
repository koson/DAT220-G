#include <iostream>
#include <algorithm>
bool isPalindrome(std::string letter)
{
    for (int i = 0; i <(letter.length())/2 ; ++i) {
        if(letter[i] != letter[letter.length()-1-i]) //check different positions of the word
            return false;
    }
    return true;
}
int main() {
    std::string word;
    std::cout << "Please enter a word:\n";
    std::cin >> word;
    /*length of the word*/
    std::cout <<"There are " << word.length() << " letters in the word.\n";
    if(isPalindrome(word))
        std::cout << "The word is a palindrome\n";
    else
        std::cout << "The word is not a palindrome\n";
    /*reversed_word*/
    std::reverse(word.begin(), word.end());
    std::cout <<"The word reversed is " << word <<"\n";

    return 0;
}

/*Write an application that asks the user for a word and:
*Tells how many letters are in the word
*Tells if the word is a palindrome
*Prints the word reversed*/
#include <iostream>
#include <map>
#include <algorithm>


int main()
{
    std::map<std::string, int> words;
    std::string word;
    int count_words = 0;
    std::cout << "Enter words followed by 0:" << std::endl;
    while(std::getline(std::cin, word) && word != "stop" )
    {
        words[word]++;
        count_words ++;
    }

    std::cout << "Unique: " << words.size() << std::endl;
    std::cout << "Total: " << count_words << std::endl;
    for (const auto& word: words)
        std::cout << word.first  << " : " << word.second << std::endl;
    return 0;
}



/*
 Write an application that asks for words until "stop" is given and:
• Prints how many unique words have been entered
• Prints how many words in total have been entered
• Prints how many times each word has been entered
Areas of interest: std::map
Expected output:
Unique : 3
Total : 7
banana : 5 (for each word)
 */
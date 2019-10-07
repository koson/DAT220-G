#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>


int main() {
    std::vector<int> numbers;
    int num = 0, sum;
    double avg, median = 0;
    std::cout << "Please enter numbers followed by 0:\n";
    while(std::cin>>num && num!= 0)
    {
       numbers.push_back(num);
    }
    // return error if no numbers are given
    if(numbers.empty())
    {
        std::cout << "No numbers entered.\n";
        return -1;
    }
    std::cout << "\n";
    sum = accumulate(numbers.begin(), numbers.end(), 0);
    avg = (double)sum/numbers.size();
    std::cout << "Average : " << avg << "\n";

    // find median
    sort(numbers.begin(), numbers.end());
    size_t size = numbers.size();
    if(size%2 == 0)
       median = (numbers[size/2 -1] + numbers[size/2])/2.0; // for even
    else
        median = numbers[size/2]; // for odd
    std::cout << "Median : " << median << "\n";

    std::cout << "Descending : ";

    // Print numbers sorted
    for(std::size_t i = 0; i < numbers.size(); i++)
        std::cout << numbers[numbers.size() - i - 1] << " ";


    return 0;
}


/*
 Write an application that asks for numbers until 0 is given as input and:

    Prints out the average
    Prints out the median
    Prints out the numbers sorted, in descending order

Note: The 0 should not be counted or used in the calculations.

Areas of interest: std::cin, std::list, std::vector, <algorithm> header

Expected output:
Average : 2.5
Median : 7
Descending : 3 2 1
 */
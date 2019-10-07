#include <iostream>
bool numPrime(int i)
{
    bool isPrime = true;
    for (int j = 2; j <= i/2; ++j) {
        if(i%j==0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}
int main() {
    std::cout << "Numbers 1 to 10" << std::endl;
    for (int i = 1; i <=10 ; ++i) {
        std::cout <<i << " ";
    }
    std::cout << std::endl << std::endl;
    std::cout << "Numbers 1 to 20, only even numbers" << std::endl;
    for (int j = 1; j <= 20; ++j) {
        if(j%2 == 0)
        {
            std::cout << j << " ";
        }
    }
    std::cout << std::endl << std::endl;

    std::cout << "Numbers 1 to 20, only odd numbers" << std::endl;
    for (int k = 1; k <= 20; ++k) {
        if(k%2!=0)
        {
            std::cout << k << " ";
        }
    }
    std::cout << std::endl << std::endl;
    std::cout << "Numbers 1 to 50, every 3rd number" << std::endl;
    for (int l = 1; l <=50 ; l+=3) {
         std::cout << l << " ";
    }
    std::cout << std::endl << std::endl;
    std::cout << "Numbers 1 to 40, reverse order, every 4th number" << std::endl;
    for (int m = 40; m >=1 ; m-=4) {
        std::cout << m << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "Numbers 1 to 100, prime numbers only" << std::endl;
    for (int n = 2; n <=100 ; ++n) {
        if(numPrime(n))
        {
            std::cout << n << " ";
        }
    }
    return 0;
}

/*
Write an application that prints out:
Numbers 1 to 10
Numbers 1 to 20, only even numbers
Numbers 1 to 20, only odd numbers
Numbers 1 to 50, every 3rd number
Numbers 1 to 40, reverse order, every 4th number
Numbers 1 to 100, prime numbers only
with space as a separator for each number.
 */
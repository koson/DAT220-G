#include <iostream>

#include "config.h"

class Something
{
public:
    // : config(config) initializes the reference stored in the class.
    // Not to be confused with inheritance, the syntax looks similar,
    // but this is not inheritance, just initialization.
    Something(const Config& config) : config(config)
    {
    }

    // Use dependency from function parameter
    void do_something(const Config& config)
    {
        std::cout << "Something from parameter: " << config.path << std::endl;
    }

    // Use dependency from class reference
    void do_something_more()
    {
        std::cout << "Something from protected reference: " << config.path << std::endl;
    }

protected:
    const Config& config;
};

void do_something(const Config& config)
{
    std::cout << "Something from function: " << config.path << std::endl;
}

int main()
{
    // Declare application state (long living data) as local variables.
    // Prevents global access to important data.
    Config config;

    config.users = 5;
    config.path = "C:/data";
    config.speed = 76.34;

    // Dependency inject config data as a parameter
    do_something(config);

    // Dependency inject config data as class function parameter
    Something something(config);
    something.do_something(config);
    something.do_something_more();

    return 0;
}
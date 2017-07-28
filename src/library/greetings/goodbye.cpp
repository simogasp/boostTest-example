#include "goodbye.hpp"

#include <iostream>

void goodbyeWorld()
{
    goodbye("World!");
}

void goodbye(const std::string &name)
{
    std::cout << "Goodbye, " << name << std::endl;
}

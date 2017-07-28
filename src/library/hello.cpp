#include "hello.h"

#include <iostream>

void hello(const std::string& name)
{
    std::cout << "Hello, " << name << std::endl;
}

void helloWorld()
{
    hello("World");
}

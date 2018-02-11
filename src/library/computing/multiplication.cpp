#include <stdexcept>
#include "multiplication.hpp"

double computeInterest(double total, double ratio)
{
    return multiply(total, ratio);
}

void throwingFunction()
{
    throw std::domain_error("Error! You should not call this function");
}
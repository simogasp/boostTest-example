#pragma once

/**
 * @brief Multiply two values.
 * @tparam T the type of the values.
 * @param first value
 * @param second value
 * @return the product
 */
template<typename T>
T multiply(const T& first, const T& second)
{
    return first * second;
}

/**
 * @brief Compute the interests given a total and a interest ratio.
 * @param total The total amount.
 * @param ratio The interest ratio.
 * @return the The effective amount of the interest.
 */
double computeInterest(double total, double ratio);


#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#define RESET	"\033[0m"
#define BLUE	"\033[1;34m"
#define GREEN   "\x1B[32m"

#include <iostream>

template <typename value>
void swap(value a, value b)
{
    value tmp = a;
    a = b;
    b = tmp;
}

template <typename value>
value max(value a, value b)
{
    return (a > b ?  a : b);
}

template <typename value>
value min(value a, value b)
{
    return (a < b ?  a : b);
}

#endif
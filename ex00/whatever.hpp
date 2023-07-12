#ifndef WHATEVER_HPP
#define WHATEVER_HPP

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
#ifndef ITER_HPP
#define ITER_HPP

#define RESET	"\033[0m"
#define BLUE	"\033[1;34m"
#define GREEN   "\x1B[32m"

#include <iostream>

template <typename type>
void print_foo(type t)
{
    std::cout << t << " ";
}

template <typename type, typename len>
void iter(type* addr, len l, void (*foo)(const type&))
{
    for(len i = 0; i < l; ++i)
        foo(addr[i]);
}

#endif
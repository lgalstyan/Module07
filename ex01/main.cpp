#include "iter.hpp"

int main()
{
    std::cout << GREEN << "----------------------Test1-----------------------\n" << RESET;
    int count1 = 7;
    int arr1[] = {0, 1, 1, 2, 3, 5, 8};

    std::cout << "Array of intagers => ";
    iter(arr1, count1, print_foo);
    std::cout << std::endl;


    std::cout << std::endl << GREEN << "----------------------Test2-----------------------\n" << RESET;
    unsigned int count2 = 7;
    float arr2[] = {0.01f, 1.301f, 1.01f, 2.01f, 3.01f, 5.01f, 8.01f};

    std::cout << "Array of floats => ";
    iter(arr2, count2, print_foo);
    std::cout << std::endl;


    std::cout << std::endl << GREEN << "----------------------Test3-----------------------\n" << RESET;
    short count3 = 7;
    char arr3[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};

    std::cout << "Array of chars => ";
    iter(arr3, count3, print_foo);
    std::cout << std::endl;


    std::cout << std::endl << GREEN << "----------------------Test4-----------------------\n" << RESET;
    long count4 = 6;
    std::string arr4[] = {"Hi ", "my ", "name ", "is ", "Zina ", "Harutyunian."};

    std::cout << "Array of chars => ";
    iter(arr4, count4, print_foo);
    std::cout << std::endl;

    return 0;
}
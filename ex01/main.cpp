#include "iter.hpp"

class Awesome 
{
    public:
        Awesome( void ) : _n( 42 ) { return; }
        int get( void ) const { return this->_n; }
    private: 
        int _n;
        };

    std::ostream& operator<<(std::ostream& o, Awesome const &rhs)
    {
        o << rhs.get();
        return o;
    }
    template< typename T > void print(T const& x)
    {
        std::cout<<x<<std::endl;
        return;
    } 

  int main() 
  {
    int tab[] = { 0, 1, 2, 3, 4 }; 
    Awesome tab2[5];
    // iter(tab, 5, print);
    iter(tab2, 5, print);
    return (0);
  }

// int main()
// {
//     std::cout << GREEN << "----------------------Test1-----------------------\n" << RESET;
//     int count1 = 7;
//     int arr1[] = {0, 1, 1, 2, 3, 5, 8};

//     std::cout << "Array of intagers => ";
//     iter(arr1, count1, print_foo);
//     std::cout << std::endl;


//     std::cout << std::endl << GREEN << "----------------------Test2-----------------------\n" << RESET;
//     unsigned int count2 = 7;
//     float arr2[] = {0.01f, 1.301f, 1.01f, 2.01f, 3.01f, 5.01f, 8.01f};

//     std::cout << "Array of floats => ";
//     iter(arr2, count2, print_foo);
//     std::cout << std::endl;


//     std::cout << std::endl << GREEN << "----------------------Test3-----------------------\n" << RESET;
//     short count3 = 7;
//     char arr3[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};

//     std::cout << "Array of chars => ";
//     iter(arr3, count3, print_foo);
//     std::cout << std::endl;


//     std::cout << std::endl << GREEN << "----------------------Test4-----------------------\n" << RESET;
//     long count4 = 6;
//     std::string arr4[] = {"Hi ", "my ", "name ", "is ", "Zina ", "Harutyunian."};

//     std::cout << "Array of chars => ";
//     iter(arr4, count4, print_foo);
//     std::cout << std::endl;

//     return 0;
// }
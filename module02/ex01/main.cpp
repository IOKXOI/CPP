#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed a(1);
    Fixed b( a );
    Fixed floater(3.14);
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}

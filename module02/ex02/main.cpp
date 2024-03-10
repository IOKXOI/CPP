#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    a = Fixed( 1234.4321f );

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl << std::endl;


    
    std::cout << "Now we create a f object who's the addition of b (" << b << ") and c (" << c << ")" << std::endl;
    Fixed f = b + c;
    std::cout << "So now object f = " << f << std::endl << std::endl;

    std::cout << "Now we create a g object who's the substraction of f (" << f << ") and c (" << c << ")" << std::endl;
    Fixed g = f - c;
    std::cout << "So now object g = " << g << std::endl << std::endl;

    std::cout << "Now we create a h object who's the multiplication of g (" << g << ") and c (" << c << ")" << std::endl;
    Fixed h = g * c;
    std::cout << "So now object h = " << h << std::endl << std::endl;

    std::cout << "Now we create a i object who's the multiplication of h (" << h << ") and c (" << c << ")" << std::endl;
    Fixed i = h / c;
    std::cout << "So now object i = " << i << std::endl << std::endl;


    if (a < b)
        std::cout << "a is " << a << " and b is " << b << " so a < b." << std::endl << std::endl;
    if (a > b)
        std::cout << "a is " << a << " and b is " << b << " so a > b." << std::endl << std::endl;
    if (a < b)
        std::cout << "a is " << a << " and b is " << b << " so a < b." << std::endl << std::endl;
    if (a > b)
        std::cout << "a is " << a << " and b is " << b << " so a > b." << std::endl << std::endl;
    if (a == b)
         std::cout << "a is " << a << " and b is " << b << " so a = b." << std::endl << std::endl;
    if (a != b)
         std::cout << "a is " << a << " and b is " << b << " so a != b." << std::endl << std::endl;
    return (0);
}

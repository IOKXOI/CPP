#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"


int main( void ) {
    const Point a(0.5, 0.5);
    const Point b(1, 1);
    const Point c(1, 0);
    const Point test(0.8, 0.6);

    std::cout <<  "The point is: " << (bsp(a, b ,c , test )? "INSIDE" : "OUTSIDE") << std::endl;

    return (0);
}

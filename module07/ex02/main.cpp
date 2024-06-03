#include "Array.hpp"
#include <iostream> 

int main( void ) {
    unsigned int n = 10;

    Array<int>Strasbourg(n);

    for (int i = 0; i < 10; i ++) {
        Strasbourg.setArrayElement(i, i);
        Strasbourg.accessElement(i);
    }

    std::cout << "Array is size of: " << Strasbourg.size() << std::endl;;

    return 0; 
}

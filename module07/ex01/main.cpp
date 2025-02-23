#include "iter.hpp"
#include <iostream> 

// int main( void ) {

// char array[23] = "ABCDEFG";
// iter(array, 23, iter_on_array<char>);

// size_t length = 23;
// for (size_t i = 0; i < length; i++) {
// 	std::cout << array[i];
// }
// std::cout << std::endl;

// int array_int[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
// iter(array_int, 10, iter_on_array<int>);
// length = 10;
// for (size_t i = 0; i < length; i++) {
// 	std::cout << array_int[i] << " ";
// }
// std::cout << std::endl;
// return 0; 
// }


class Awesome

{

public:

Awesome( void ): _n(42) { return; }

int get( void ) const { return this->_n; }

private:

int _n;

};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >

void print( T const & x ) { std::cout << x << std::endl; return; }


int main(){

int tab[] = { 0, 1, 2, 3, 4 };
Awesome tab2[5];

iter( tab, 5, print );

iter (tab2, 5, print);

return 0;

}

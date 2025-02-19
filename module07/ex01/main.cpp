#include "iter.hpp"
#include <iostream> 

int main( void ) {

char array[23] = "Bonjour comment ca va?";
iter(array, 23, iter_on_array<char>);

size_t length = 23;
for (size_t i = 0; i < length; i++) {
	std::cout << array[i];
}
std::cout << std::endl;

int array_int[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
iter(array_int, 10, iter_on_array<int>);
length = 10;
for (size_t i = 0; i < length; i++) {
	std::cout << array_int[i] << " ";
}
std::cout << std::endl;


return 0; 
}

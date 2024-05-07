#include <sstream>
#include <cstdlib> 
#include <iostream>
#include <stdint.h>	
#include "ScalarConverter.hpp"

int main(int argc, char* argv[]) {
	if (argc != 2)
		return (std::cout << "Invalid input." << std::endl, 1);
	ScalarConverter::convert(argv[1]);
	return 0;
}

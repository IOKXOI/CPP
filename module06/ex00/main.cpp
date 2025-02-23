#include <sstream>
#include <cstdlib> 
#include <iostream>
#include <stdint.h>	
#include "ScalarConverter.hpp"
#include <limits>

#include <iomanip>



int main(int argc, char* argv[]) {
	// int in = 10;

	// double doubl = static_cast<double> (in);
	// std::cout << doubl << std::setprecision(1) << std::endl;

	if (argc != 2)
		return (std::cout << "Invalid input." << std::endl, 1);
	ScalarConverter::convert(argv[1]);
	return 0;
}

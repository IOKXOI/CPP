#include <sstream>
#include <iostream>
#include <stdint.h>	
#include "boolFunctionParsing.hpp"

int	getInputType(char *argv) {
	std::string const	input = argv;

	if (isChar(input))
		return 1;
	else if (containtForbidden(input))
		return false;
	else if (containForbidenLetter(input))
		return false;
	else if (invalidCharSequence(input))
		return false;
	else if (isFloat(input))
		return 3;
	else if (isDouble(input))
		return 4;
	return 2;
}

int main(int argc, char* argv[]) {
	if (argc != 2)
		return (std::cout << "Invalid input." << std::endl, 1);
	int	type = getInputType(argv[1]);
	std::cout << type << std::endl;
	// try {
	// 	convertExceptType(argv, type);
	// }
	// catch (std::exception &e) {
	// 	std::cout << "Failure during convertion: " << e.what() << std::endl;
	// }
	return 0;
}

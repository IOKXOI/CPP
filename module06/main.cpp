#include <sstream>
#include <cstdlib> 
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

void	printChar(char c) {
	if (c < 32 && c > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
}

void	printFloat(float f) {

}

int main(int argc, char* argv[]) {
	int		_i = 0;
	char	_c = '\0';
	float	_f = 0;
	double	_d = 0;

	if (argc != 2)
		return (std::cout << "Invalid input." << std::endl, 1);
	switch (getInputType(argv[1])) {
		case 1:
			_c = *argv[1];
			break;
		case 2:
			std::istringstream(argv[1]) >> _i;
			break;
		case 3:
			_f = strtof(argv[1], NULL);
			break;
		case 4:
			_d = strtod(argv[1], NULL);
			break;
		default:
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
			return 0;
	}
	std::cout << "int: " << _i << std::endl;
	std::cout << "float: " << _f << "f" << std::endl;
	std::cout << "double: " << _d << std::endl;
	// try {
	// 	convertExceptType(argv, type);
	// }
	// catch (std::exception &e) {
	// 	std::cout << "Failure during convertion: " << e.what() << std::endl;
	// }
	return 0;
}

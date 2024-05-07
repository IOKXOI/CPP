#include "ScalarConverter.hpp"
#include <climits>
#include <cstdlib>
#include <cfloat>
#include <cerrno>
#include <iostream>
#include <iomanip>



char		ScalarConverter::c = 0;
int			ScalarConverter::i = 0;
float		ScalarConverter::f = 0;
double		ScalarConverter::d = 0;

// ScalarConverter::ScalarConverter() {};
// ScalarConverter::ScalarConverter(std::string input) {
// 	if (input.empty())
// 		throw (ScalarConverter::EmptyInput());
// 	else if (input == "-inf")
// 		_-inf = true;
// 	else if (input == "-inff")
// 		_-inff = true;
// 	else if (input == "+inf")
// 		_+inf = true;
// 	else if (input == "+inff")
// 		_+inff = true;
// 	else if (input == "nan")
// 		_nan = true;
// 	else 
// 		throw (getInputType(input));
// };
enum Type{
	ERROR_INPUT = 0,
	CHAR_TYPE = 1,
	INT_TYPE = 2,
	FLOAT_TYPE = 3,
	DOUBLE_TYPE = 4,
	P_INF_INPUT = 5,
	N_INF_INPUT = 6,
	NAN_INPUT = 7
};

int	ScalarConverter::getInputType(char *argv) {
	std::string const	input = argv;
	if (isChar(input))
		return CHAR_TYPE;
	else if (containtForbidden(input))
		return ERROR_INPUT;
	else if (containForbidenLetter(input))
		return ERROR_INPUT;
	else if (invalidCharSequence(input))
		return ERROR_INPUT;
	else if (isFloat(input))
		return FLOAT_TYPE;
	else if (isDouble(input))
		return DOUBLE_TYPE;
	return INT_TYPE;
}

void	ScalarConverter::convertFromChar(char* input) {
	ScalarConverter::c = *input;
	ScalarConverter::i = static_cast<int>(ScalarConverter::c);
	ScalarConverter::f = static_cast<float>(ScalarConverter::c);
	ScalarConverter::d = static_cast<double>(ScalarConverter::c);
}

void	ScalarConverter::convertFromInt(char* input) {
	if (INT_MIN <= atoi(input) && INT_MAX >= atoi(input)) {
		ScalarConverter::i = atoi(input);
		ScalarConverter::c = static_cast<char>(ScalarConverter::i);
		ScalarConverter::f = static_cast<float>(ScalarConverter::i);
		ScalarConverter::d = static_cast<double>(ScalarConverter::i);
	}
	else 
		throw (ScalarConverter::Overflow());
}

void	ScalarConverter::convertFromFloat(char* input) {
	if (FLT_MIN <= atof(input) && FLT_MAX >= atof(input)) {
		ScalarConverter::f = atof(input);
		ScalarConverter::c = static_cast<char>(ScalarConverter::f);
		ScalarConverter::i = static_cast<int>(ScalarConverter::f);
		ScalarConverter::d = static_cast<double>(ScalarConverter::f);
	}
	else 
		throw (ScalarConverter::Overflow());
}

void	ScalarConverter::convertFromDouble(char* input) {
	ScalarConverter::d = strtod(input, NULL);
	if (errno != ERANGE) {
		ScalarConverter::c = static_cast<char>(ScalarConverter::d);
		ScalarConverter::i = static_cast<int>(ScalarConverter::d);
		ScalarConverter::f = static_cast<float>(ScalarConverter::d);
	}
	else 
		throw (ScalarConverter::Overflow());
}


void	ScalarConverter::convert(char *input) {
	switch (ScalarConverter::getInputType(input)) {
		case CHAR_TYPE:
			ScalarConverter::convertFromChar(input);
			break;
		case INT_TYPE:
			try {
				ScalarConverter::convertFromInt(input);
			}
			catch (std::exception &e) {
				std::cout << e.what() << std::endl;
				return;
			}
			break;
		case FLOAT_TYPE:
			try {
				ScalarConverter::convertFromFloat(input);
			}
			catch (std::exception &e) {
				std::cout << e.what() << std::endl;
				return;
			}
			break;
		case DOUBLE_TYPE:
			try {
				ScalarConverter::convertFromDouble(input);
			}
			catch (std::exception &e) {
				std::cout << e.what() << std::endl;
				return;
			}
			break;
		// case P_INF_INPUT:
		// 	ScalarConverter::convertFromPInf();
		// 	break;
		// case N_INF_INPUT:
		// 	ScalarConverter::convertFromNInf();
		// 	break;
		// case NAN_INPUT:
		// 	ScalarConverter::convertFromNan();
		// 	break;
	}
	printChar(ScalarConverter::c);
	std::cout << "int: " << ScalarConverter::i << std::endl;
	std::cout << "float: " << ScalarConverter::f << "f" << std::endl;
	std::cout << "double: " << ScalarConverter::d << std::endl;
}

const char	*ScalarConverter::Overflow::what() const throw() {
	return ("Overflow.");
}
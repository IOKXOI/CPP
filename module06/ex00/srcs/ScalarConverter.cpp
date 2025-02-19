#include "ScalarConverter.hpp"
#include <climits>
#include <cstdlib>
#include <cfloat>
#include <cerrno>
#include <iostream>
#include <iomanip>
#include <limits>






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

int	getInputType(std::string input) {
	if (input == "+inf" || input == "+inff")
		return P_INF_INPUT;
	else if (input == "-inf" || input == "-inff")
		return N_INF_INPUT;
	else if (input == "nan" || input == "nanf")
		return NAN_INPUT;
	else if (isChar(input))
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

void	convertFromChar(std::string input) {
	char c = input[0];
	printChar(c);
	std::cout << "Int: " << static_cast<int>(c) << std::endl;
	std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void	convertFromInt(std::string  input) {
	const char *str = input.c_str();
	errno = 0;

	
	long i = strtol(str, NULL, 10);

	if (errno == ERANGE || i > INT_MAX || i < INT_MIN) {
		throw (Overflow());
	}
	else {
		printChar(static_cast<char>(i));
		std::cout <<  "Int: " << i << std::endl;
		std::cout <<  "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
		std::cout <<  "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
	}
}

void	convertFromFloat(std::string input) {
	const char *str = input.c_str();
	errno = 0;

	long double f = strtod(str, NULL);
	if (errno == ERANGE || f < -FLT_MAX || f > FLT_MAX) 
		throw (Overflow());
	else {
		printChar(static_cast<char>(f));
		if (f > INT_MAX || f < INT_MIN)
			std::cout << "Int: Overflow" << std::endl;
		else 
			std::cout << "Int: " << static_cast<int>(f) << std::endl;
		std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(f) << "f" << std::endl;
		std::cout << "Double:" << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
	} 
}

void	convertFromDouble(std::string input) {
	const char* str = input.c_str();

	double d = strtod(str, NULL);
	if (errno != ERANGE) {
		printChar(static_cast<char>(d));
		if (d > INT_MAX || d < INT_MIN)
			std::cout << "Int: Overflow" << std::endl;
		else 
			std::cout << "Int: " << static_cast<int>(d) << std::endl;
		if (d > FLT_MAX	|| d < -FLT_MAX)
			std::cout << "Float: Overflow" << std::endl;
		else 
			std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
		std::cout << "Double: " << std::fixed << std::setprecision(1) << d << std::endl;
	}
	else 
		throw (Overflow());
}

void	convertFromPInf() {
	std::cout << "Char: Impossible." << std::endl;
	std::cout << "Char: Impossible." << std::endl;
	std::cout << "Float: " << static_cast <float> (std::numeric_limits<float>::infinity()) << "f" << std::endl;
	std::cout << "Double : " << std::fixed << std::numeric_limits<double>::infinity() << std::endl;
}

void	convertFromNInf() {
	std::cout << "Char: Impossible." << std::endl;
	std::cout << "Char: Impossible." << std::endl;
	std::cout << "Float: " << std::fixed << -std::numeric_limits<float>::infinity() << "f" << std::endl;
	std::cout << "Double : " << std::fixed << -std::numeric_limits<double>::infinity() << std::endl;
}

void	convertFromNan() {
	std::cout << "Char: Impossible." << std::endl;
	std::cout << "Char: Impossible." << std::endl;
	std::cout << "Float: " << std::fixed << std::numeric_limits<double>::quiet_NaN() << "f" << std::endl;
	std::cout << "Double: " << std::fixed << std::numeric_limits<double>::quiet_NaN() << std::endl;
}








// ScalarConverter::ScalarConverter() {};

// ScalarConverter::ScalarConverter(const ScalarConverter &toCopy) {
// 	(void)toCopy;
// }

// ScalarConverter &ScalarConverter::operator=(const ScalarConverter &toCopy) {
// 	(void)toCopy;
// 	return (*this);
// }

// ScalarConverter::~ScalarConverter() {};




void	ScalarConverter::convert(std::string input) {
	switch (getInputType(input)) {
		case CHAR_TYPE:
			convertFromChar(input);
			break;
		case INT_TYPE:
			try {
				convertFromInt(input);
			}
			catch (std::exception &e) {
				std::cout << e.what() << std::endl;
				return;
			}
			break;
		case FLOAT_TYPE:
			try {
				convertFromFloat(input);
			}
			catch (std::exception &e) {
				std::cout << e.what() << std::endl;
				return;
			}
			break;
		case DOUBLE_TYPE:
			try {
				convertFromDouble(input);
			}
			catch (std::exception &e) {
				std::cout << e.what() << std::endl;
				return;
			}
			break;
		case P_INF_INPUT:
			convertFromPInf();
			return;
		case N_INF_INPUT:
			convertFromNInf();
			return;
		case NAN_INPUT:
			convertFromNan();
			return;
		default:
			std::cout << "Input error." << std::endl;
			return ;
	}
}



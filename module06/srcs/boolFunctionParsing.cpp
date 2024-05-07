#include <sstream>
#include <iostream>
#include <stdint.h>
#include "ScalarConverter.hpp"


bool	isNum(char c) {
	if (c >= '0' && c <= '9')
		return 1;
	else
		return 0;
}

bool	isAlphaL(const char c) {
	if (c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}

bool	isAlphaU(const char c) {
	if (c >= 'A' && c <= 'Z')
		return 1;
	else
		return 0;
}

bool	containForbidenLetter(std::string input) {
	for (size_t i = 0; i < input.length(); i++) {
		if (input[i] == 'f' && i == input.length() - 1)
			return false;
		else if (isAlphaL(input[i]) || isAlphaU(input[i]) )
			return true;
	}
	return false;
}

bool	badCharPosition(char c, int offset, int lenght) {
	if (c == '.')
	{
		if (offset == 0 || offset == lenght)
			return true;
	}
	else if (c == 'f')
	{
		if (offset != lenght)
			return true;
	}
	else if (c == '-') {
		if(offset != 0)
			return true;
	}
	return false;
}

bool	invalidCharSequence(std::string input) {
	for (uint8_t i = 0; i < (input.length() - 1); i++) {
		if (input[i] == '-' && !isNum(input[i + 1])) 
			return true;
		else if (input[i] == '.' && !isNum(input[i + 1]))
			return true;
	}
	return false;
}

bool	containtForbidden(std::string input) {
	uint8_t	point = 0;
	uint8_t	charf = 0;

	for (size_t i = 0; i < input.length(); i++) {
		if (!isAlphaL(input[i]) && !isAlphaU(input[i]) && !isNum(input[i]) && (input[i] != '.') && (input[i] != '-'))// && i == 0)))
			return true;
		else if (input[i] == '.')
			point++;
		else if (input[i] == 'f')
			charf++;
		if (point > 1 || charf > 1 || badCharPosition(input[i], i, input.length() - 1))
			return true;
	}
	return false;
}

bool	isChar(std::string input) {
	if (input.length() == 1 && !isNum(*input.c_str()))
		return true;
	return false;
}

bool	isFloat(std::string input) {
	for (size_t i = 0; i < input.length(); i++) {
		if (input[i] == 'f')
			return true;
	}
	return false;
}

bool	isDouble(std::string input) {
	for (size_t i = 0; i < input.length(); i++) {
		if (input[i] == '.')
			return true;
	}
	return false;
}

void	printChar(char c) {
	if (c > 32 && c < 126) 
		std::cout << "'" << c << "'" << std::endl;
	else 
		std::cout << "Char: Non displayable." << std::endl;
}


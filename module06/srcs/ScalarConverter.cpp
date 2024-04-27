#include "ScalarConverter.hpp"

char convertToChar(std::string input) {
	return (static_cast <char>(input[0]));
}

int convertToInt(std::string input) {
	return (static_cast <int>(input[0]));
}

float convertToFloat(std::string input) {
	return (static_cast <float>(input[0]));
}

double convertToDouble(std::string input) {
	return (static_cast <double>(input[0]));
}

// ScalarConverter::convert(std::string _input){
// 	std::cout << "Char: " << (getInputType(input) == 1) ? "_input" : convertToChar(input) << std::endl;
// }

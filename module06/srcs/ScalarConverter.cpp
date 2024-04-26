#include "ScalarConverter.hpp"

char convertToChar(std::string input) {
	return (static_cast <char>(input[0]));
}

// ScalarConverter::convert(std::string _input){
// 	std::cout << "Char: " << (getInputType(input) == 1) ? "_input" : convertToChar(input) << std::endl;
// }

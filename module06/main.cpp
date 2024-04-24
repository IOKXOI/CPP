#include <sstream>
#include <iostream>
#include <stdint.h>	

bool	isNum(const char c) {
	if (c >= '0' && c <= '9')
		return 1;
	else
		return 0;
}

bool	isAlphaL(const char c) {
	if (c >= 'a' & c <= 'z')
		return 1;
	else
		return 0;
}

bool	isAlphaU(const char c) {
	if (c >= 'A' & c <= 'Z')
		return 1;
	else
		return 0;
}



int	getInputType(char *argv) {
	std::string const	input = argv;

	if (input.length() == 1 && (isAlphaU(input[0]) || isAlphaL(input[0])))
		return 1;
	for (size_t i = 0; i < input.length(); i++) {
		if (!isAlphaL(input[i]) && !isAlphaU(input[i]) && !isNum(input[i]) && (input[i] != '.' && (input[i] != '-' && i == 0)))
			return false;
	}
	uint8_t	point = 0;
	for (size_t i = 0; i < input.length(); i++) {
		if (isAlphaL(input[i]) || isAlphaU(input[i]) ) {
			if (!(input[i] == 'f' && i == input.length() - 1))
				return false;
		}
		else if (input[i] == '.') {
			if (point > 0 || i == input.length() - 1)
				return false;
			point++;
		}
		else if (input[i] == 'f' && i == input.length() - 1)
			return 3;
	}
	for (size_t i = 0; i < input.length(); i++) {
		if (input[i] == '.') {
			return 4;
		}
	}
	for (size_t i = 0; i < input.length(); i++) {
		if (!isNum(input[i]))
			return false;
	}
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

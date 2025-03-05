#include "RPN.hpp"

int	main(int argc, const char **argv) {
	if (argc != 2) {
		std::cerr << "Error: Invalids arguments." << std::endl;
		return 1;
	}
		Calculator::calcul(argv);
	return (0);
}
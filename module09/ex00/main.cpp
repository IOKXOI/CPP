#include "bitcoinRegister.hpp"

int	main(int argc, char **argv) {
	
	if (argc != 2) {
		std::cout << "Invalid argument." << std::endl;
		return (1);
	}
	Exchange exchange;
	try {
		exchange.parse_file("./includes/data.csv");
	}
	catch (const std::runtime_error& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try {
		exchange.convert(argv[1]);
	}
	catch (const std::runtime_error &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
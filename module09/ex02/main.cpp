#include "PMergeMe.hpp"

int	main(int argc, const char **argv) {

	if (argc < 3) {
		std::cout << "Error: Missing arguments." << std::endl;
		return (0);
	}
	FordJohnson	Johnny;

	Johnny.print_before(argv);
	if (!Johnny.vector(argc, argv)) {
		return 0;
	}
	if (!Johnny.deque(argc, argv)) {
		return 0;
	}
	Johnny.print_vector_time();
	Johnny.print_deque_time();
	return (1);
}
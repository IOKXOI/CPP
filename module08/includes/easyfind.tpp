#include <vector>

template <typename T>
int easyfind(T container, int element) {
	try {
		for (typename T::iterator it = container.begin(); it < container.end(); it++) {
			if (*it == element)
				return (*it);
		}
	}
	catch (std::exception &e) {
		(void)e;
		return (-1);
	}
	std::cout << "No occurence found." << std::endl;
	return (-1);
}
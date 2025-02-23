#include <vector>
#include <iostream>
#include <exception>

template <typename T>
int easyfind(T container, int element) {
	for (typename T::iterator it = container.begin(); it != container.end(); it++) {
		if (*it == element)
			return (*it);
	}
	throw std::runtime_error("No occurence found.");
	return (-1);
}
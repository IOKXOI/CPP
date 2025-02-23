#pragma once
#include <cstddef>

template <typename T>
void	iter_on_array(T &elem) {
	elem++;
};

template <typename T>
void	iter(T *address, size_t length, void (*function)(const T &)) {
	for (size_t i = 0; i < length; i++) {
		function(address[i]);
	}
};


#pragma once
#include <cstddef>

template <typename T>
class Array {
	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T> &toCopy);
		Array &operator=(const Array<T> &toCopy);
		~Array();

		unsigned int		size() const;
		void				accessElement(unsigned int n);
		void				setArrayElement(T element, unsigned int index);

	private:
		T*				array;
		unsigned int	elementNumber;
};

#include "Array.tpp"


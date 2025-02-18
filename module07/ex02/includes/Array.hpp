#pragma once
#include <cstddef>
#include <exception>

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
		T					getElement(unsigned int n);
		void				setArrayElement(T element, unsigned int index);
		T& operator[](int index);

		class OutOfLimitsException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Index out of limits");
				}
		};

	private:
		T*				array;
		unsigned int	elementNumber;
};


template<typename T>
T& Array<T>::operator[](int index)
{
	if (index < 0 || index >= elementNumber)
		throw Array<T>::OutOfLimitsException();
	return (array[index]);
}

#include "Array.tpp"


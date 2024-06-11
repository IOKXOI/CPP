#include <stdexcept>
#include <iostream>


template <typename T>
Array<T>::Array() {
	array = new T();
	elementNumber = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	array = new T[n]();
	elementNumber = n;
}

template <typename T>
Array<T>::Array(const Array<T> &toCopy) {
	array = toCopy.array;
	elementNumber = toCopy.elementNumber;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &toCopy) {
	if (this != &toCopy) {
		array = toCopy.array;
		elementNumber = toCopy.elementNumber;
	}
	return (this);
}

template <typename T>
Array<T>::~Array() {
	delete[] array;
}

template <typename T>
void	Array<T>::accessElement(unsigned int n) {
	try {
		if (n + 1 > size()) {
			throw std::out_of_range("Index out of range");
		}
		std::cout << "Array from array class contain " << array[n] << " at index " << n << "." << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Erreur: " << e.what() << std::endl;
	}
}

template <typename T>
unsigned int		Array<T>::size() const{
	return (this->elementNumber);
}

template <typename T>
void	Array<T>::setArrayElement(T element, unsigned int index) {
	this->array[index] = element;
}

#include <stdexcept>
#include <iostream>


template <typename T>
Array<T>::Array() {
	array = new T[0];
	elementNumber = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	array = new T[n]();
	elementNumber = n;
}

template <typename T>
Array<T>::Array(const Array<T> &toCopy) {
	elementNumber = toCopy.elementNumber;
	array = new T[elementNumber]();

	for (size_t i = 0; i < elementNumber; i++)
		array[i] = toCopy.array[i];
}

// template <typename T>
// Array<T>::Array(const Array<T> &toCopy): Array(toCopy.elementNumber) {
// 	for (size_t i = 0; i < elementNumber; i++)
// 		array[i] = toCopy.array[i];
// }


template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &toCopy) {
	if (this != &toCopy) {
		delete[] array;
		elementNumber = toCopy.elementNumber;
		array = new T[elementNumber] ();
		for (size_t i = 0; i < elementNumber; i++)
			array[i] = toCopy.array[i];
	}
	return (*this);
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
T	Array<T>::getElement(unsigned int n) {
	try {
		if (n + 1 > size()) {
			throw std::out_of_range("Index out of range");
		}
	}
	catch (std::exception &e) {
		std::cout << "Erreur: " << e.what() << std::endl;
	}
	return (array[n]);
}

template <typename T>
unsigned int		Array<T>::size() const{
	return (this->elementNumber);
}

template <typename T>
void	Array<T>::setArrayElement(T element, unsigned int index) {
	if (index < elementNumber)
		this->array[index] = element;
}

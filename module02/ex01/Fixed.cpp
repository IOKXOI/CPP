#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(): _integer(0) {
	std::cout << "Fixed default constructor called." << std::endl;
}

Fixed::Fixed(const int nb) {
	std::cout << "Fixed int constructor called." << std::endl;
	_integer = nb << 8;
}

Fixed::Fixed(<const float nb) : setRawBits(static<int>(nb (1 << 8))) {
	std::cout << "Fixed int constructor called." << std::endl;
}

Fixed::Fixed(const Fixed &toCopy) {
	std::cout << "Fixed copy constructor called." << std::endl;
	_integer = toCopy.getRawBits();
}

Fixed &Fixed::operator=(const Fixed&toCopy) {
	std::cout << "Fixed assignment constructor called." << std::endl;
	if (this != &toCopy) {
		_integer = toCopy.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Default destructor called." << std::endl;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_integer);
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_integer = raw;
}

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(): _integer(0) {
	std::cout << "Fixed default constructor called." << std::endl;
}

Fixed::Fixed(const int nb) {
	std::cout << "Fixed int constructor called." << std::endl;
	_integer = nb << _coma;
}

Fixed::Fixed(const float nb){
	std::cout << "Fixed int constructor called." << std::endl;
	_integer = roundf(nb * (1 << _coma));	
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

void Fixed::setRawBits( int const raw ) {
	this->_integer = raw;
}

int Fixed::getRawBits( void ) const {
	return (this->_integer);
}

int Fixed::toInt( void ) const {
	return (_integer >> _coma);
}

float Fixed::toFloat( void ) const {
	return ((float)_integer / (float)( 1 << _coma));
}

std::ostream& operator<<(std::ostream &os, const Fixed &toPrint) {
	os << toPrint.toFloat();
	return (os);
}
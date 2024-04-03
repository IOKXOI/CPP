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
	std::cout << "Default destructor called for this number: " << this->toFloat() << "." << std::endl;
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

bool Fixed::operator>(const Fixed a) const {
	if (this->toFloat() > a.toFloat())
		return 1;
	else
		return 0;
}

bool Fixed::operator<(const Fixed a) const {
	if (this->toFloat() < a.toFloat())
		return 1;
	else
		return 0;
}

bool Fixed::operator>=(const Fixed a) const {
	if (this->toFloat() >= a.toFloat())
		return 1;
	else
		return 0;
}

bool Fixed::operator<=(const Fixed a) const{
	if (this->toFloat() <= a.toFloat())
		return 1;
	else
		return 0;
}

bool	Fixed::operator==(const Fixed a) const {
	if (this->toFloat() == a.toFloat())
		return 1;
	else
		return 0;
}

bool	Fixed::operator!=(const Fixed a) const {
	if (this->toFloat() != a.toFloat())
		return 1;
	else
		return 0;
}

Fixed	Fixed::operator+(const Fixed a) const {
	return Fixed(this->toFloat() + a.toFloat());
}

Fixed	Fixed::operator-(const Fixed a) {
	return Fixed(this->toFloat() - a.toFloat());
}

Fixed	Fixed::operator*(const Fixed a) {
	return Fixed(this->toFloat() * a.toFloat());
}

Fixed	Fixed::operator/(const Fixed a) {
	return Fixed(this->toFloat() / a.toFloat());
}

Fixed	&Fixed::operator++() {
	_integer = _integer + (1 << 8);
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	previous(*this);
	_integer  = _integer + (1 << 8);
	return(previous);
}

Fixed	&Fixed::operator--() {
	_integer  = _integer - (1 << 8);
	return(*this);
}

Fixed	Fixed::operator--(int) {
	Fixed previous(*this);
	_integer  = _integer - (1 << 8);
	return(previous);
}

Fixed	Fixed::min(const Fixed &fixedNumber1, const Fixed &fixedNumber2) {
	if (fixedNumber1 < fixedNumber2)
		return (fixedNumber1);
	else
		return (fixedNumber2);
}

Fixed	Fixed::min(Fixed &fixedNumber1, Fixed &fixedNumber2) {
	if (fixedNumber1 < fixedNumber2)
		return (fixedNumber1);
	else
		return (fixedNumber2);
}

Fixed	Fixed::max(const Fixed &fixedNumber1, const Fixed &fixedNumber2){
	if (fixedNumber1 > fixedNumber2)
		return (fixedNumber1);
	else
		return (fixedNumber2);
}

Fixed	Fixed::max(Fixed &fixedNumber1, Fixed &fixedNumber2){
	if (fixedNumber1 > fixedNumber2)
		return (fixedNumber1);
	else
		return (fixedNumber2);
}


#include "Point.hpp"

Point::Point():_x(0), _y(0) {
	std::cout << "Point default constructor called." << std::endl;
}

Point::Point(const Point &obj): _x(obj._x), _y(obj._y) {
	std::cout << "Point copie constructor called." << std::endl;
}

Point& Point::operator=(const Point &obj) {
	if (this != &obj) {
		std::cout << "Point assignment constructor called." << std::endl;
	}
	return (*this);
}

Point::~Point() {
	std::cout << "Point destructor called." << std::endl;
}

Point::Point(const float x, const float y): _x(x), _y(y){
	std::cout << "Point parameters constructor x/y called" << std::endl;
}

float Point::getX(void) const{
	return (_x.toFloat());
}

float Point::getY(void) const {
	return (_y.toFloat());
}



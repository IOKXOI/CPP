#include "Base.hpp"

B::B() {
	// bint = 0;
	identity = "Hello i'm B";
}

B &B::operator=(const B &toCopy) {
	if (this != &toCopy) {
		
	}
	return (*this);
}
B::~B() {}

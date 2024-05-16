#include "Base.hpp"

C::C() {
	// cint = -2147483648;
	identity = "Hello i'm C";
}

C &C::operator=(const C &toCopy) {
	if (this != &toCopy) {
		
	}
	return *this;
}

C::~C() {}

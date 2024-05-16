#include "Base.hpp"

A::A() {
	// aint = 2147483647;
	identity = "Hello i'm A";
}
A &A::operator=(const A &toCopy) {
	if (this != &toCopy) {
		
	}
	return *this;
}
A::~A() {}


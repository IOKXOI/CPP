#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "colors.hpp"

int main(void) {
	Base base;

	A a = base.generate();
	B b = base.generate();
	C c = base.generate();

	return 0;
}

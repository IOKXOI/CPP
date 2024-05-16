#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "colors.hpp"

int main(void) {
	Base base;
	A *a = new A();
	B *b = new B();
	C *c = new C();

	base.identify(a);
	base.identify(b);
	base.identify(c);

	a = (A *)base.generate();
	std::cout << a->identity << " value = " << a->baseint << std::endl;
	b = (B *)base.generate();
	std::cout << b->identity << " value = " << b->baseint << std::endl; 
	c = (C *)base.generate();
	std::cout << c->identity << " value = " << c->baseint << std::endl; 

	std::cout << base.generate()->identity << "value" << base.generate()->baseint << std::endl; 

	base.identify(a);
	base.identify(b);
	base.identify(c);
	base.identify(&base);

	A &ptra = a;
	B &ptrb = b;
	C &ptrc = c;


	base.identify(ptra);
	base.identify(ptrb);
	base.identify(ptrc);
	base.identify(&base);


	return 0;
}

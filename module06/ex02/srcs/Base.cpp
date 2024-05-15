#include <cstdlib>
#include <ctime>
#include "Base.hpp"


Base::Base() {}
Base::~Base() {}

Base*	Base::generate(void) {
	A *a = new A();
	B *b = new B();
	C *c = new C();

	srand (time(NULL));
	switch (rand() % 3) {
		case 0:
			return ((Base *) a);
		case 1:
			return ((Base *) b);
		case 2:
			return ((Base *) c);
	}
	return (this);
}

// void	Base::identify(Base* p) {

// }

// void	Base::identify(Base& p) {

// }

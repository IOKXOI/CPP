#include <cstdlib>
#include <ctime>
#include "Base.hpp"


Base::Base() {
	baseint = -2147483648;
	identity = "Hello i'm base";
}

Base::~Base() {}

Base*	Base::generate(void) {
	srand (time(NULL));
	switch (rand() % 3) {
		case 0:
			return (/*(Base *)*/ new A());
		case 1:
			return (/*(Base *)*/ new B());
		case 2:
			return (/*(Base *)*/ new C());
	}
	return (NULL);
}

void	Base::identify(Base* p) {
	if (dynamic_cast<A*> (p))
		std::cout << p << " pointer is an object from class A." << std::endl;
	else if (dynamic_cast<B*> (p))
		std::cout << p << " pointer is an object from class B." << std::endl;
	else if (dynamic_cast<C*> (p))
		std::cout << p << " pointer is an object from class C." << std::endl;
	else 
		std::cout << p << " pointer is an object from class Base." << std::endl;
}

void	Base::identify(Base& p) {
	try {
		(void)dynamic_cast<A &> (p);
		std::cout << &p << " pointer is an object from class A." << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		(void)dynamic_cast<B &> (p);
		std::cout << &p << " pointer is an object from class B." << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		(void)dynamic_cast<C &> (p);
		std::cout << &p << " pointer is an object from class C." << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}




// void	Base::identify(Base& p) {

// }

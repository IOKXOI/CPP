#include <iostream>
#include "Base.hpp"
#include "A.hpp"	
#include "B.hpp"
#include "C.hpp"
#include "colors.hpp"
#include <cstdlib> 


Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

Base*	generate(void) {
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

void	identify(Base* p) {
	if (p == NULL) {
		std::cout << "Invalid argument: null pointer." << std::endl;
		return;
	}
	if (dynamic_cast<A*> (p)) {
		std::cout << p << " pointer is an object from class A." << std::endl;
		return ;
	}
	else 
		std::cout << p << " Cast to class A failed" << std::endl;


	if (dynamic_cast<B*> (p)) {
		std::cout << p << " pointer is an object from class B." << std::endl;
		return ; 
	}
	else 
		std::cout << p << " Cast to class B failed" << std::endl;


	if (dynamic_cast<C*> (p)){
		std::cout << p << " pointer is an object from class C." << std::endl;
		return ;
	}
	else 
		std::cout << p << " Cast to class C failed" << std::endl;


	std::cout << p << " pointer is an object from class Base." << std::endl;
}

void	identify(Base& p) {
	try {
		(void)dynamic_cast<A &> (p);
		std::cout << &p << " pointer is an object from class A." << std::endl;
		return;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		(void)dynamic_cast<B &> (p);
		std::cout << &p << " pointer is an object from class B." << std::endl;
		return;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		(void)dynamic_cast<C &> (p);
		std::cout << &p << " pointer is an object from class C." << std::endl;
		return ;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int main(void) {

	Base *a = generate();

	identify(a);
	identify(*a);
	delete (a);
	return 0;
}

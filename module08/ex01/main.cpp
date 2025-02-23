#include "Span.hpp"
#include <iostream> 

int main( void ) {
	Span	Test(5);

	try {
		Test.addNumber(0);
		std::cout << "Number Added" << std::endl;
		Test.addNumber(4);
		std::cout << "Number Added" << std::endl;
		Test.addNumber(10);
		std::cout << "Number Added" << std::endl;
		Test.addNumber(15);
		std::cout << "Number Added" << std::endl;
		Test.addNumber(20);
		std::cout << "Number Added" << std::endl;
		// Test.addNumber(1);
		// std::cout << "Number Added" << std::endl;
		// Test.addNumber(1);
		// std::cout << "Number Added" << std::endl;
		// Test.addNumber(1);
		std::cout << Test.shortestSpan() << std::endl;
		std::cout << Test.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0; 
}
	
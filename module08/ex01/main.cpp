#include "Span.hpp"
#include <iostream> 

int main( void ) {
	Span	Test(5);

	try {
		Test.addNumber(1);
		std::cout << "Number Added" << std::endl;
		Test.addNumber(1);
		std::cout << "Number Added" << std::endl;
		Test.addNumber(1);
		std::cout << "Number Added" << std::endl;
		Test.addNumber(1);
		std::cout << "Number Added" << std::endl;
		Test.addNumber(1);
		std::cout << "Number Added" << std::endl;
		Test.addNumber(1);
		std::cout << "Number Added" << std::endl;
		Test.addNumber(1);
		std::cout << "Number Added" << std::endl;
		Test.addNumber(1);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << Test.shortestSpan() << std::endl;
	std::cout << Test.longestSpan() << std::endl;
	return 0; 
}
	
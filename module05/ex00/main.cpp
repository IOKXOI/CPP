#include "Bureaucrat.hpp"

int main(){
	Bureaucrat Mami("coucou", 1);
	try {
		Bureaucrat Papi("coucou", 150);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Mami.incrementGrade();
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

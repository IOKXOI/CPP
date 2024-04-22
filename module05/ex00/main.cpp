#include "Bureaucrat.hpp"

int main(){
	Bureaucrat Mami("coucou", 1);
	try {
		Bureaucrat Papi("coucou", 150);
//		Bureaucrat Papi("coucou", -1);
//		Bureaucrat Papi("coucou", 151);
		try {
			Papi.decrementGrade();
		}
		catch (const std::exception &e) {
			std::cout << "Failure to decrement papi... " << e.what() << std::endl;
		}
	}
	catch (const std::exception &e) {
		std::cout << "Failure to create papi... " << e.what() << std::endl;
	}
	try {
		Mami.incrementGrade();
	}
	catch (const std::exception &e) {
		std::cout << "Failure to increment mami... " << e.what() << std::endl;
	}
}

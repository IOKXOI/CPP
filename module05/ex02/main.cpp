#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int	main(void)
{
	try
	{
		std::cout << "Try creating bureaucrat: " << std::endl;
		Bureaucrat					gandalf("Gandalf", 151);
		ShrubberyCreationForm		trees("forest");

		std::cout << "Try sign " << trees << "Try to sign with: " << gandalf;
		try {
			trees.beSigned(gandalf);
			std::cout << trees;
			//gandalf.signAForm(trees);
			trees.execute(gandalf);
		}
		catch (std::exception &e) {
			std::cout << "Failure to sign... " << e.what() << std::endl;
		}
	}
	catch(std::exception& e) {
		std::cout << "Failure to create... " << e.what() << std::endl;
	}

	// try{
	// 	std::cout << "Try creating bureaucrat: " << std::endl;
	// 	Bureaucrat	pipin("Pipin", 100);
	// 	std::cout << pipin;

	// 	std::cout << "Try creating AForm: " << std::endl;

	// 	try{
	// 	}
	// 	catch (std::exception &e) {
	// 		std::cout << "Failure to sign: " << e.what() << std::endl;
	// 	}
	// }
	// catch(std::exception& e) {
	// 	std::cout << "Failure to create: " << e.what() << std::endl;
	// }
	// return (0);
}

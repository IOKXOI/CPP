#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int	main(void)
{
	// try
	// {
	//  	std::cout << "execute without sign before" << std::endl;
	// 	Bureaucrat					gandalf("Gandalf", 15);
	// 	ShrubberyCreationForm		trees("forest");
	// 	std::cout << trees;
	// 	trees.execute(gandalf);
	// 	std::cout << trees;
	// }
	// catch(std::exception& e) {
	// 	std::cout << "Failure to create... " << e.what() << std::endl;
	// }
	// std::cout << std::endl << std::endl;
	// try
	// {
	// 	std::cout << "execute with grade too low." << std::endl;
	// 	Bureaucrat					gandalf("Gandalf", 142);
	// 	ShrubberyCreationForm		trees("forest");
	// 	gandalf.signAForm(trees);
	// 	std::cout << trees;
	// 	trees.execute(gandalf);
	// 	std::cout << trees;
	// }
	// catch(std::exception& e) {
	// 	std::cout << "Failure to create... " << e.what() << std::endl;
	// }
	//std::cout << std::endl << std::endl;
	try {
		std::cout << "execute all good." << std::endl;
		Bureaucrat					gandalf("Gandalf", 136);
		ShrubberyCreationForm		trees("forest");

		//trees.beSigned(gandalf);
		//trees.execute(gandalf);
		gandalf.executeForm(trees);
	}
	catch (std::exception &e) {
		std::cout << "Fail to create: " << e.what() << std::endl;
	}

// 	std::cout << std::endl << std::endl;
// 	try {
// 		std::cout << "execute all good." << std::endl;
// 		Bureaucrat					zaphodBeeblebrox("zaphodBeeblebrox", 5);
// 		PresidentialPardonForm		contract("John Coffey");

// 		contract.beSigned(zaphodBeeblebrox);
// 		contract.execute(zaphodBeeblebrox);
// 	}
// 	catch (std::exception &e) {
// 		std::cout << "Fail to create: " << e.what() << std::endl;
// 	}

// 	std::cout << std::endl << std::endl;
// 	try {
// 		std::cout << "execute all good." << std::endl;
// 		Bureaucrat					gandalf("Gandalf", 40);
// 		RobotomyRequestForm			casino("Lottery");

// 		casino.beSigned(gandalf);
// 		casino.execute(gandalf);
// 	}
// 	catch (std::exception &e) {
// 		std::cout << "Fail: " << e.what() << std::endl;
// 	}
	return (0);
}

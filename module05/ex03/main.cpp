#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int	main(void)
{
	Intern someRandomIntern;
	Form* rrf;
	//rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	//rrf = someRandomIntern.makeForm("Shruberry creation", "Bender");
	//Bureaucrat MeeseeksBox("Meeseeks", 5);
	Bureaucrat MeeseeksBox("Meeseeks",6); // cannot exec presidential pardon
	//Bureaucrat MeeseeksBox("Meeseeks", 45);
	//Bureaucrat MeeseeksBox("Meeseeks", 46); // cannot exec robotomy
	//Bureaucrat MeeseeksBox("Meeseeks", 137);
	//Bureaucrat MeeseeksBox("Meeseeks", 138); // cannot exec shrubbery
	
	try {
		rrf->beSigned(MeeseeksBox);
		try {
			rrf->execute(MeeseeksBox);
		}
		catch(std::exception &e) {
			std::cout << "EXECUTION: " <<  e.what() << std::endl;
		}
	}
	catch(std::exception &e) {
		std::cout << "Signature: " << e.what() << std::endl;
	}

	delete rrf;

	return (0);
}

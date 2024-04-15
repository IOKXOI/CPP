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
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	Bureaucrat MeeseeksBox("Meeseeks", 1);
	
	rrf->beSigned(MeeseeksBox);
	rrf->execute(MeeseeksBox);

	return (0);
}

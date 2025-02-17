#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime> 

RobotomyRequestAForm::RobotomyRequestAForm(): AForm() {
	//std::cout << "RobotomyRequestAForm default constructor called." << std::endl;
}

RobotomyRequestAForm::RobotomyRequestAForm(std::string target): AForm("RobotomyRequestAForm", 72, 45) {
	//std::cout << "RobotomyRequestAForm constructor targeting [" << target << "] called with success." << std::endl;
	_target = target;
}

RobotomyRequestAForm::RobotomyRequestAForm(const RobotomyRequestAForm &toCopy): AForm("RobotomyRequestAForm", 72, 45), _target(toCopy._target) {
	//std::cout << "RobotomyRequestAForm copy constructor called." << std::endl;
}

RobotomyRequestAForm &RobotomyRequestAForm::operator=(const RobotomyRequestAForm &toCopy) {
	if (this != &toCopy) {
		_target = toCopy._target;
		//std::cout << "RobotomyRequestAForm assignement constructor called." << std::endl;
	}
	return (*this); 
}

RobotomyRequestAForm::~RobotomyRequestAForm() {
	//std::cout << "RobotomyRequestAForm [" << getName() << "] destructor called." << std::endl;
}

void		RobotomyRequestAForm::execute(Bureaucrat const & executor) const {
	try {
		AForm::execute(executor);
		srand(static_cast<unsigned int>(time(0)));
		if ((rand() % 2 + 1)  == 2)
			std::cout << _target << " has been randomized." << std::endl;
		else
			std::cout << _target << " robotomy failed, nothing happen." << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "Cannot exec RobotomyRequestAForm: " << e.what() << std::endl;
	}
}

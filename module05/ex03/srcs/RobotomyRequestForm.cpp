#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime> 

RobotomyRequestForm::RobotomyRequestForm(): Form() {
	//std::cout << "RobotomyRequestForm default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45) {
	//std::cout << "RobotomyRequestForm constructor targeting [" << target << "] called with success." << std::endl;
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &toCopy): Form("RobotomyRequestForm", 72, 45), _target(toCopy._target) {
	//std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &toCopy) {
	if (this != &toCopy) {
		_target = toCopy._target;
		//std::cout << "RobotomyRequestForm assignement constructor called." << std::endl;
	}
	return (*this); 
}

RobotomyRequestForm::~RobotomyRequestForm() {
	//std::cout << "RobotomyRequestForm [" << getName() << "] destructor called." << std::endl;
}

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	try {
		Form::execute(executor);
		srand(static_cast<unsigned int>(time(0)));
		if ((rand() % 2 + 1)  == 2)
			std::cout << _target << " has been randomized." << std::endl;
		else
			std::cout << _target << " robotomy failed, nothing happen." << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "Cannot exec RobotomyRequestForm: " << e.what() << std::endl;
	}
}

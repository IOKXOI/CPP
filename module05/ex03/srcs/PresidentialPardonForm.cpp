#include "PresidentialPardonForm.hpp"

PresidentialPardonAForm::PresidentialPardonAForm(): AForm() {
	//std::cout << "PresidentialPardonAForm default constructor called." << std::endl;
}

PresidentialPardonAForm::PresidentialPardonAForm(std::string target): AForm("PresidentialPardonAForm", 25, 5) {
	//std::cout << "PresidentialPardonAForm constructor targeting [" << target << "] called with success." << std::endl;
	_target = target;
}

PresidentialPardonAForm::PresidentialPardonAForm(const PresidentialPardonAForm &toCopy): AForm("PresidentialPardonAForm", 25, 5), _target(toCopy._target) {
	//std::cout << "PresidentialPardonAForm copy constructor called." << std::endl;
}

PresidentialPardonAForm &PresidentialPardonAForm::operator=(const PresidentialPardonAForm &toCopy) {
	if (this != &toCopy) {
		_target = toCopy._target;
		//std::cout << "PresidentialPardonAForm assignement constructor called." << std::endl;
	}
	return (*this); 
}

PresidentialPardonAForm::~PresidentialPardonAForm() {
	//std::cout << "PresidentialPardonAForm [" << getName() << "] destructor called." << std::endl;
}

void		PresidentialPardonAForm::execute(Bureaucrat const & executor) const {
	try {
		AForm::execute(executor);
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "Cannot exec PresidentialPardonAForm: " << e.what() << std::endl;
	}
}

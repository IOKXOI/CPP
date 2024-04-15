#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form() {
	//std::cout << "PresidentialPardonForm default constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5) {
	//std::cout << "PresidentialPardonForm constructor targeting [" << target << "] called with success." << std::endl;
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &toCopy): Form("PresidentialPardonForm", 25, 5), _target(toCopy._target) {
	//std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &toCopy) {
	if (this != &toCopy) {
		_target = toCopy._target;
		//std::cout << "PresidentialPardonForm assignement constructor called." << std::endl;
	}
	return (*this); 
}

PresidentialPardonForm::~PresidentialPardonForm() {
	//std::cout << "PresidentialPardonForm [" << getName() << "] destructor called." << std::endl;
}

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	try {
		Form::execute(executor);
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "Cannot exec PresidentialPardonForm: " << e.what() << std::endl;
	}
}

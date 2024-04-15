#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
	_registry[0] = "presidential pardon";
	_registry[1] = "robotomy request";
	_registry[2] = "shrubbery creation";
}

Intern::Intern(const Intern& toCopy) {
	_registry[0] = toCopy._registry[0];
	_registry[1] = toCopy._registry[1];
	_registry[2] = toCopy._registry[2];
}

Intern::~Intern() {}

Intern& Intern::operator=(const Intern& toCopy) {
	if (this != &toCopy) {
		_registry[0] = toCopy._registry[0];
		_registry[1] = toCopy._registry[1];
		_registry[2] = toCopy._registry[2];
	}
	return (*this);
}

Form* Intern::makeForm(std::string formName, std::string target) {
	unsigned long int index;

	for(long unsigned int i = 0; i < formName.size(); i++) {
		formName[i] = std::tolower(formName[i]);
	}
	for(index = 0; index < _registry->length() && _registry[index] != formName; index++) {
		;
	}
	switch(index){
		case 0:
			return new PresidentialPardonForm(target);
		case 1:
			return new RobotomyRequestForm(target);
		case 2:
			return new ShrubberyCreationForm(target);
		default:
			return new Form();
	}

}

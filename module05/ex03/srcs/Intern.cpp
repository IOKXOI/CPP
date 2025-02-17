#include "Intern.hpp"
#include "AForm.hpp"
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

AForm* Intern::makeAForm(std::string formName, std::string target) {
	unsigned long int index;

	size_t array_size = sizeof(_registry) / sizeof(_registry[0]);

	for(long unsigned int i = 0; i < formName.size(); i++) {
		formName[i] = std::tolower(formName[i]);
	}
	for(index = 0; index < array_size && _registry[index] != formName; index++) {
		;
	}
	switch(index){
		case 0:
			return new PresidentialPardonAForm(target);
		case 1:
			return new RobotomyRequestAForm(target);
		case 2:
			return new ShrubberyCreationAForm(target);
		default:
			std::cout << "I don't have [" << formName << "] form in my repositary, I'm sorry buddy." << std::endl;

			return NULL;
	}

}

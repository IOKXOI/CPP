#pragma once
#include "string"
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern& toCopy);
		~Intern();
		Intern& operator=(const Intern& toCopy);

		Form* makeForm(std::string formName, std::string target);

	private:
	std::string	_registry[3];

};

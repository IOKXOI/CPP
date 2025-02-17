#pragma once
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern& toCopy);
		~Intern();
		Intern& operator=(const Intern& toCopy);

		AForm* makeAForm(std::string formName, std::string target);

	private:
	std::string	_registry[3];

};

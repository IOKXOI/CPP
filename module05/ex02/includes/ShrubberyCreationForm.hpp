#pragma once
#include "AForm.hpp"


class	ShrubberyCreationForm: public AForm {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &toCopy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);

		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &toCopy);

		void				execute(Bureaucrat const & executor) const;

	private:
		std::string			_target;
};

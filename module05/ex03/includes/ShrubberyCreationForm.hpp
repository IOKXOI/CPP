#pragma once
#include "AForm.hpp"


class	ShrubberyCreationAForm: public AForm {
	public:
		ShrubberyCreationAForm();
		ShrubberyCreationAForm(const ShrubberyCreationAForm &toCopy);
		~ShrubberyCreationAForm();
		ShrubberyCreationAForm(std::string target);

		ShrubberyCreationAForm& operator=(const ShrubberyCreationAForm &toCopy);

		void				execute(Bureaucrat const & executor) const;

	private:
		std::string			_target;
};

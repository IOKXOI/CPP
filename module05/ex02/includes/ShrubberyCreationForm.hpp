#pragma once
#include "AForm.hpp"


class	ShrubberyCreationForm: public AForm {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &toCopy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name);

		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &toCopy);

		void		execute(Bureaucrat const & executor) const;
	private:
		const std::string	_name;
		bool				_signed;
		const int16_t		_toSignRequiredGrade;
		const int16_t		_toExecRequiredGrade;
};

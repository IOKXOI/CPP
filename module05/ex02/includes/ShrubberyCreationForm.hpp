#pragma once
#include "AForm.hpp"


class	ShrubberyCreationForm: public AForm {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &toCopy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name);

		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &toCopy);

		std::string			getName() const;
		void				beSigned(Bureaucrat &bureaucrat);
		bool				getSign() const;
		void				setSign(bool x);
		int16_t				getSignRequiredGrade() const;
		int16_t				getExecRequiredGrade() const;
		void				execute(Bureaucrat const & executor) const;

	private:
		const std::string	_name;
		bool				_signed;
		const int16_t		_toSignRequiredGrade;
		const int16_t		_toExecRequiredGrade;
};

#pragma once

#include "AForm.hpp"

class PresidentialPardonAForm: public AForm {
	public:
		PresidentialPardonAForm();
		PresidentialPardonAForm(const PresidentialPardonAForm &toCopy);
		~PresidentialPardonAForm();
		PresidentialPardonAForm(std::string target);

		PresidentialPardonAForm& operator=(const PresidentialPardonAForm &toCopy);

		void				execute(Bureaucrat const & executor) const;

	private:
		std::string			_target;
};

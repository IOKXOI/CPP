#pragma once

#include "AForm.hpp"

class PresidentialPardonForm: public AForm {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &toCopy);
		~PresidentialPardonForm();
		PresidentialPardonForm(std::string target);

		PresidentialPardonForm& operator=(const PresidentialPardonForm &toCopy);

		void				execute(Bureaucrat const & executor) const;

	private:
		std::string			_target;
};

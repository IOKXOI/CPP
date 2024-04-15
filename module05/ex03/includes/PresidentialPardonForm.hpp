#pragma once

#include "Form.hpp"

class PresidentialPardonForm: public Form {
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

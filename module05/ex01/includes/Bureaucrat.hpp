#pragma once
#include <string>
#include <stdint.h>
#include <iostream>
#include <exception>
#include "Form.hpp"
#define BLUE "\033[34m"
#define RESET "\033[0m"
#define BOLD "\033[1m"


class Form;

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &toCopy);
		Bureaucrat &operator=(const Bureaucrat &toCopy);
		virtual ~Bureaucrat();
		Bureaucrat(const std::string name, const int32_t grade);

		class GradeTooHighException: public std::exception{
			public: 
				const char* what() const throw();
		};
		class GradeTooLowException: public std::exception{
			public:
				const char* what() const throw();

		};

		const std::string	getName() const;
		int32_t		getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);
		void		signForm(Form &form);

	private: 
		const std::string	_name;
		int32_t				_grade;
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat &obj);

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


		const std::string	getName() const;
		int32_t				getGrade(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
		void				signForm(Form &Form);

	private:
		const std::string	_name;
		int32_t				_grade;


	class GradeTooHighException: public std::exception{
		public:
			GradeTooHighException(std::string name);
			virtual~GradeTooHighException() throw();
			const char* what() const throw();

		private:
			std::string *_errorName;
	};

	class GradeTooLowException: public std::exception{
		public:
			GradeTooLowException(std::string name);
			~GradeTooLowException() throw();
			const char* what() const throw();
		
		private:
			std::string *_errorName;
	};
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat &obj);

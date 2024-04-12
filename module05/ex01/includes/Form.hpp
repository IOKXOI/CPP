#pragma once
#include "Bureaucrat.hpp"
#define RESET "\033[0m"
#define UNDERLINE "\033[4m"
#define RED "\033[31m"
#define BOLD "\033[1m"
#define BLINK "\033[5m"

class Bureaucrat;

class Form {
	private:
		const std::string	_name;
		bool				_signed;
		const int16_t		_toSignRequiredGrade;
		const int16_t		_toExecRequiredGrade; 
		Form();

	public:
		Form(const Form &toCopy);
		Form& 	operator=(const Form &toCopy);
		virtual ~Form();
		Form(const std::string name, const int16_t signRequiredGrade, const int16_t execRequiredGrade);
		
		std::string			getName() const;
		bool				getSign() const;
		void				setSign(bool x);
		void				beSigned(Bureaucrat &bureaucrat);
		int16_t				getSignRequiredGrade() const;
		int16_t				getExecRequiredGrade() const;

		class GradeTooHighException: public std::exception {
			public:
				const char*		what() const throw(); 
		};

		class GradeTooLowException: public std::exception {
			public:
				const char*		what() const throw();
		};

};

std::ostream &operator<<(std::ostream &os, const Form &form);

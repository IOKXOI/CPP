#pragma once
#include "Bureaucrat.hpp"
#define RESET "\033[0m"
#define UNDERLINE "\033[4m"
#define RED "\033[31m"
#define BOLD "\033[1m"
#define BLINK "\033[5m"

class Bureaucrat;

class AForm {
	private:
		const std::string	_name;
		bool				_signed;
		const int16_t		_toSignRequiredGrade;
		const int16_t		_toExecRequiredGrade; 

	public:
		AForm();
		AForm(const AForm &toCopy);
		AForm& 	operator=(const AForm &toCopy);
		virtual ~AForm();
		AForm(const std::string name, const int16_t signRequiredGrade, const int16_t execRequiredGrade);

		virtual void				beSigned(Bureaucrat &bureaucrat) = 0;
		virtual std::string			getName() const = 0;
		virtual bool				getSign() const = 0;
		virtual void				setSign(bool x) = 0;
		virtual int16_t				getSignRequiredGrade() const = 0;
		virtual int16_t				getExecRequiredGrade() const = 0;
		virtual void				execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException: public std::exception {
		public:
			virtual const char*		what() const throw();
			GradeTooHighException(std::string name);
			~GradeTooHighException() throw();

		private:
			std::string* _errorName;
	};

	class GradeTooLowException: public std::exception {
		public:
			virtual const char*		what() const throw();
			GradeTooLowException(std::string name);
			~GradeTooLowException() throw();

		private:
			std::string* _errorName;
	};
};

std::ostream &operator<<(std::ostream &os, const AForm &AForm);

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

	public:
		Form();
		Form(const Form &toCopy);
		Form& 	operator=(const Form &toCopy);
		virtual ~Form();
		Form(const std::string name, const int16_t signRequiredGrade, const int16_t execRequiredGrade);

		virtual const std::string	getName() const;
		virtual void				beSigned(Bureaucrat &bureaucrat);
		virtual bool				getSign() const;
		virtual void				setSign(bool x);
		virtual int16_t				getSignRequiredGrade() const;
		virtual int16_t				getExecRequiredGrade() const;
		virtual void				execute(Bureaucrat const & executor) const;


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
			GradeTooLowException(std::string name);
			~GradeTooLowException() throw();
			virtual const char*		what() const throw();

		private:
			std::string* _errorName;
	};

	class NotSignedYet: public std::exception {
		public:
			NotSignedYet(std::string name);
			~NotSignedYet() throw();
			virtual const char*		what() const throw();

		private:
			std::string *_errorName;
	};
};

std::ostream &operator<<(std::ostream &os, const Form &Form);

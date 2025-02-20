#include "Form.hpp"


Form::Form(): _name("empty"), _signed(0), _toSignRequiredGrade(0), _toExecRequiredGrade(0) {}

Form::Form(const std::string name, const int16_t signRequiredGrade, const int16_t execRequiredGrade): _name(name), _signed(0), _toSignRequiredGrade(signRequiredGrade), _toExecRequiredGrade(execRequiredGrade){
	if (_toExecRequiredGrade < 1 || _toSignRequiredGrade < 1)
		throw(GradeTooHighException());
	else if (_toExecRequiredGrade > 150 || _toSignRequiredGrade > 150)
		throw(GradeTooLowException());
	std::cout << "Form constructor called for [" << getName() << "] with success." << std::endl;
}


Form::Form(const Form &toCopy): _name(toCopy.getName()), _signed(toCopy.getSign()), _toSignRequiredGrade(toCopy.getSignRequiredGrade()), _toExecRequiredGrade(toCopy.getExecRequiredGrade()) {
	std::cout << "Copy constructor called." << std::endl;
}


Form &Form::operator=(const Form &toCopy){
	std::cout << "Assignement constructor called." << std::endl;
	if (this != &toCopy){
		_signed = toCopy.getSign();
	}
	return (*this);
}


Form::~Form(){
	std::cout << "Form: [" << getName() << "] destructor called." << std::endl;
}




std::string	Form::getName() const{
	return (_name);
}

bool		Form::getSign() const{
	return (_signed);
}

void		Form::setSign(bool x) {
	_signed = x; 
}

int16_t		Form::getSignRequiredGrade() const{
	return (_toSignRequiredGrade);
}

int16_t		Form::getExecRequiredGrade() const{
	return (_toExecRequiredGrade);
}

void		Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > _toSignRequiredGrade) {
		throw(GradeTooLowException());
	}
	else if (_signed == 0){
		_signed = 1;
		return;
	}
	else {
		std::cout << "Form already signed." << std::endl;
	}
}

const char	*Form::GradeTooHighException::what() const throw() {
		return BLINK "Grade too high." RESET;
}

const char	*Form::GradeTooLowException::what() const throw() {
		return BLINK "Grade too low." RESET;
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
	std::string	sign = form.getSign() ? "signed" : "unsigned";
	os << UNDERLINE RED BOLD
	<< form.getName() << RESET RED BOLD
	<< " is " << UNDERLINE
	<< sign << RESET RED BOLD
	<< " required grade to sign is: " << UNDERLINE
	<< form.getSignRequiredGrade() << RESET RED BOLD
	<< " and required grade to exec is: " << UNDERLINE
	<< form.getExecRequiredGrade() << RESET RED BOLD
	<< "."
	<< RESET
	<< std::endl;
	return os;
}

#include "AForm.hpp"


AForm::AForm(): _toSignRequiredGrade(1), _toExecRequiredGrade(1) {
	std::cout << "Default constructor AForm called. " << std::endl;
	_signed = 0;
}

AForm::AForm(const std::string name, const int16_t signRequiredGrade, const int16_t execRequiredGrade): _name(name), _signed(0), _toSignRequiredGrade(signRequiredGrade), _toExecRequiredGrade(execRequiredGrade){
	if (_toExecRequiredGrade < 1 || _toSignRequiredGrade < 1)
		throw(GradeTooHighException());
	else if (_toExecRequiredGrade > 150 || _toSignRequiredGrade > 150)
		throw(GradeTooLowException());
	std::cout << "AForm constructor called for [" << getName() << "] with success." << std::endl;

}

AForm::AForm(const AForm &toCopy): _name(toCopy.getName()), _signed(toCopy.getSign()), _toSignRequiredGrade(toCopy.getSignRequiredGrade()), _toExecRequiredGrade(toCopy.getExecRequiredGrade()) {
	std::cout << "Copy constructor called." << std::endl;
}

AForm &AForm::operator=(const AForm &toCopy){
	std::cout << "Assignement constructor called." << std::endl;
	if (this != &toCopy){
		_signed = toCopy.getSign();
	}
	return (*this);
}

AForm::~AForm(){
	std::cout << "AForm: [" << getName() << "] destructor called." << std::endl;
}

std::string	AForm::getName() const{
	return (this->_name);
}

bool		AForm::getSign() const{
	return (this->_signed);
}

void		AForm::setSign(bool x) {
	this->_signed = x; 
}

int16_t		AForm::getSignRequiredGrade() const{
	return (this->_toSignRequiredGrade);
}

int16_t		AForm::getExecRequiredGrade() const{
	return (this->_toExecRequiredGrade);
}

void		AForm::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > _toSignRequiredGrade) {
		throw(GradeTooLowException());
	}
	else if (_signed == 0){
		_signed = 1;
		return;
	}
	else {
		std::cout << "AForm already signed." << std::endl;
	}
}

const char	*AForm::GradeTooHighException::what() const throw() {
		return BLINK "Grade too high." RESET;
}

const char	*AForm::GradeTooLowException::what() const throw() {
		return BLINK "Grade too low." RESET;
}

std::ostream &operator<<(std::ostream &os, const AForm &AForm) {
	std::string	sign = AForm.getSign() ? "signed" : "unsigned";
	os << UNDERLINE RED BOLD
	<< AForm.getName() << RESET RED BOLD
	<< " is " << UNDERLINE
	<< sign << RESET RED BOLD
	<< " required grade to sign is: " << UNDERLINE
	<< AForm.getSignRequiredGrade() << RESET RED BOLD
	<< " and required grade to exec is: " << UNDERLINE
	<< AForm.getExecRequiredGrade() << RESET RED BOLD
	<< "."
	<< RESET
	<< std::endl;
	return os;
}

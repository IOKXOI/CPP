#include "AForm.hpp"


AForm::AForm(): _toSignRequiredGrade(1), _toExecRequiredGrade(1) {
	std::cout << "Default constructor AForm called. " << std::endl;
	_signed = 0;
}

AForm::AForm(const std::string name, const int16_t signRequiredGrade, const int16_t execRequiredGrade): _name(name), _signed(0), _toSignRequiredGrade(signRequiredGrade), _toExecRequiredGrade(execRequiredGrade){
	if (_toExecRequiredGrade < 1 || _toSignRequiredGrade < 1)
		throw(GradeTooHighException(name));
	else if (_toExecRequiredGrade > 150 || _toSignRequiredGrade > 150)
		throw(GradeTooLowException(name));
	std::cout << "AForm constructor called for with success." << std::endl;

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
	std::cout << "AForm destructor called." << std::endl;
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
// const char	*AForm::GradeTooHighException::what() const throw() {
// 		return BLINK "Grade too high." RESET;
// }

// const char	*AForm::GradeTooLowException::what() const throw() {
// 		return BLINK "Grade too low." RESET;
// }


AForm::GradeTooHighException::GradeTooHighException(std::string name) {
	this->_errorName = new std::string(BLINK + name + ": grade too high." + RESET);
}

AForm::GradeTooHighException::~GradeTooHighException() throw() {
	delete _errorName;
}

const char	*AForm::GradeTooHighException::what() const throw() {
	return _errorName->c_str();
}

AForm::GradeTooLowException::GradeTooLowException(std::string name) {
	this->_errorName = new std::string(BLINK + name + ": grade too low." + RESET);
}

AForm::GradeTooLowException::~GradeTooLowException() throw() {
	delete _errorName;
}

const char	*AForm::GradeTooLowException::what() const throw() {
	return _errorName->c_str();
}

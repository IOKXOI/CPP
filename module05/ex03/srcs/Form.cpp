#include "Form.hpp"


Form::Form(): _toSignRequiredGrade(1), _toExecRequiredGrade(1) {
	//std::cout << "Default constructor Form called. " << std::endl;
	_signed = 0;
}

Form::Form(const std::string name, const int16_t signRequiredGrade, const int16_t execRequiredGrade): _name(name), _signed(0), _toSignRequiredGrade(signRequiredGrade), _toExecRequiredGrade(execRequiredGrade){
	if (_toExecRequiredGrade < 1 || _toSignRequiredGrade < 1)
		throw(GradeTooHighException(name));
	else if (_toExecRequiredGrade > 150 || _toSignRequiredGrade > 150)
		throw(GradeTooLowException(name));
	//std::cout << "Form constructor called for with success." << std::endl;

}

Form::Form(const Form &toCopy): _name(toCopy.getName()), _signed(toCopy.getSign()), _toSignRequiredGrade(toCopy.getSignRequiredGrade()), _toExecRequiredGrade(toCopy.getExecRequiredGrade()) {
	//std::cout << "Copy constructor called." << std::endl;
}

Form &Form::operator=(const Form &toCopy){
	//std::cout << "Assignement constructor called." << std::endl;
	if (this != &toCopy){
		_signed = toCopy.getSign();
	}
	return (*this);
}

Form::~Form(){
	//std::cout << "Form destructor called." << std::endl;
}


const std::string	Form::getName() const {
	return (this->_name);
}

bool		Form::getSign() const {
	return (this->_signed);
}

void		Form::setSign(bool x) {
	this->_signed = x; 
}

int16_t		Form::getSignRequiredGrade() const {
	return (this->_toSignRequiredGrade);
}

int16_t		Form::getExecRequiredGrade() const {
	return (this->_toExecRequiredGrade);
}

void		Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > _toSignRequiredGrade) {
		throw(GradeTooLowException(bureaucrat.getName()));
	}
	else if (_signed == 0){
		_signed = 1;
		return;
	}
	else {
		std::cout << "RobotomyRequestForm already signed." << std::endl;
	}
}

void		Form::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > _toExecRequiredGrade)
	{
		throw(GradeTooLowException(executor.getName()));
	}
	else if (_signed == false) {
		throw(NotSignedYet(_name));
	}
}

std::ostream &operator<<(std::ostream &os, const Form &Form) {
	std::string	sign = Form.getSign() ? "signed" : "unsigned";
	os << UNDERLINE RED BOLD
	<< Form.getName() << RESET RED BOLD
	<< " is " << UNDERLINE BLINK
	<< sign << RESET RED BOLD
	<< " required grade to sign is: " << UNDERLINE
	<< Form.getSignRequiredGrade() << RESET RED BOLD
	<< " and required grade to exec is: " << UNDERLINE
	<< Form.getExecRequiredGrade() << RESET RED BOLD
	<< "."
	<< RESET
	<< std::endl;
	return os;
}

/////////////////////////////////////////////////////////GRADETOOHIGH EXCEPTION


Form::GradeTooHighException::GradeTooHighException(std::string name) {
	this->_errorName = new std::string(BLINK + name + ": grade too high." + RESET);
}

Form::GradeTooHighException::~GradeTooHighException() throw() {
	delete _errorName;
}

const char	*Form::GradeTooHighException::what() const throw() {
	return _errorName->c_str();
}

/////////////////////////////////////////////////////////GRADELOWHIGH EXCEPTION

Form::GradeTooLowException::GradeTooLowException(std::string name) {
	this->_errorName = new std::string(BLINK + name + ": grade too low." + RESET);
}

Form::GradeTooLowException::~GradeTooLowException() throw() {
	delete _errorName;
}

const char	*Form::GradeTooLowException::what() const throw() {
	return _errorName->c_str();
}

/////////////////////////////////////////////////////////NOTSIGNEDYET EXCEPTION

Form::NotSignedYet::NotSignedYet(std::string name) {
	_errorName = new std::string(name + ": Not signed yet.");
}

Form::NotSignedYet::~NotSignedYet() throw() {
	delete _errorName;
}

const char* Form::NotSignedYet::what() const throw() {
	return _errorName->c_str();
}


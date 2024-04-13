#include "Bureaucrat.hpp" 


Bureaucrat::Bureaucrat() {
	std::cout << "Default bureaucrat constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &toCopy): _name(toCopy.getName())  {
	_grade = toCopy.getGrade();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &toCopy) {
	if (this != &toCopy) {
		_grade = toCopy.getGrade();
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat: [" << getName() << "] destructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, const int32_t grade): _name(name), _grade(grade) {
	if (_grade < 1) {
		throw GradeTooHighException();
	}
	else if (_grade > 150) {
		throw GradeTooLowException();
	}
	std::cout << "Bureaucrat grade constructor for [" << getName() << "] called with success." << std::endl;
}

const std::string Bureaucrat::getName() const {
	return (this->_name);
}

int32_t Bureaucrat::getGrade() const {
	return (this->_grade);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return BLINK "Bureaucrat grade is too high." RESET;
}

const char  *Bureaucrat::GradeTooLowException::what() const throw() {
	return BLINK " Bureaucrat grade is too low." RESET;
}

void Bureaucrat::incrementGrade(void){
	if (_grade - 1 < 1) {
		throw (GradeTooHighException());
		return;
	}
	else {
		_grade--;
	}
}

void Bureaucrat::decrementGrade(void){
	if (_grade + 1 > 150) {
		throw(GradeTooLowException());
		return;
	}
	else {
		_grade++;
	}
}

void Bureaucrat::signAForm(AForm &AForm) {
	if (_grade < AForm.getSignRequiredGrade() && AForm.getSign() == 0) {
		AForm.setSign(1);
		std::cout << BOLD RED UNDERLINE
		<< getName() << RESET RED
		<< " signed " << BOLD RED UNDERLINE
		<< AForm.getName() << RESET RED
		<< "." << RESET
		<< std::endl;
	}
	else {
		std::cout << BOLD RED UNDERLINE
		<< getName() << RESET RED BOLD
		<< " couldn't sign " << BOLD RED UNDERLINE
		<< AForm.getName() << RESET RED BOLD
		<< " because "
		<< (AForm.getSign() == 0 ? "grade is too low." : "AForm already signed.")
		<< RESET
		<< std::endl;
	}
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &obj){
	os << BLUE BOLD
	<< obj.getName()
	<< ", bureaucrat grade " 
	<< obj.getGrade()
	<< "."
	<< RESET
	<< std::endl;
	return os;
}

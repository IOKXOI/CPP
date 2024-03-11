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
	std::cout << "Destructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, const int32_t grade): _name(name), _grade(grade) {
	if (_grade < 1) {
		throw GradeTooHighException();
	}
	else if (_grade > 150) {
		throw GradeTooLowException();
	}
	std::cout << "Bureaucrat grade constructor called with success." << std::endl;
}

const std::string Bureaucrat::getName() const {
	return (this->_name);
}

int32_t Bureaucrat::getGrade() const {
	return (this->_grade);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high.";
}

const char  *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low.";
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

void Bureaucrat::signForm(Form &Form) {
	if (_grade > Form.getSignRequiredGrade()) {
		std::cout
		<< getName()
		<< " signed "
		<< Form.getName()
		<< "."
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

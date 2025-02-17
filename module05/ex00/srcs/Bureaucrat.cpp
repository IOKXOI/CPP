#include "Bureaucrat.hpp" 


Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string name, const int32_t grade): name(name), grade(grade) {
	std::cout << "Bureaucrat grade constructor" << std::endl;
	if (grade < 1) {
		throw GradeTooHighException();
	}
	else if (grade > 150) {
		throw GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &toCopy): name(toCopy.getName()) {
	grade = toCopy.grade;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &toCopy) {
	if (this != &toCopy) {
		grade = toCopy.grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor called." << std::endl;
}

std::string Bureaucrat::getName() const {
	return (this->name);
}

int32_t Bureaucrat::getGrade() const{
	return (this->grade);
}


const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is to high.";
}

const char  *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low.";
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &obj){
	os << obj.getName()
	<< ", bureaucrat grade " 
	<< obj.getGrade()
	<< "."
	<< std::endl;
	return os;
}

void Bureaucrat::incrementGrade(void){
	if (grade - 1 < 1) {
		throw (GradeTooHighException());
		return;
	}
	else {
		grade--;
	}
}

void Bureaucrat::decrementGrade(void){
	if (grade + 1 > 150) {
		throw(GradeTooLowException());
		return;
	}
	else {
		grade++;
	}
}



// class Bureaucrat{
// 	public:
// 		Bureaucrat();
// 		Bureaucrat(uint8_t grade);
// 		Bureaucrat(Bureaucrat &toCopy);
// 		Bureaucrat& operator=(Bureaucrat &toCopy);
// 		~Bureaucrat();
// 		getName();
// 		getGrade();
// 		incrementGrade();
// 		decrementGrade();

// 	private: 
// 		const std::string	_name;
// 		uint8_t				_grade;
// };

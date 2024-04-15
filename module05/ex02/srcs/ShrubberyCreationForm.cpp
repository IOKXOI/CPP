#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): AForm() {
	//std::cout << "ShrubberyCreationForm default constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137) {
	//std::cout << "ShrubberyCreationForm constructor targeting [" << target << "] called with success." << std::endl;
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &toCopy): AForm("ShrubberyCreationForm", 145, 137), _target(toCopy._target) {
	//std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &toCopy) {
	if (this != &toCopy) {
		_target = toCopy._target;
		//std::cout << "ShrubberyCreationForm assignement constructor called." << std::endl;
	}
	return (*this); 
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	//std::cout << "ShrubberyCreationForm [" << getName() << "] destructor called." << std::endl;
}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	try {
		AForm::execute(executor);
		std::ofstream	outfile((_target + "_shrubbery").c_str());
		if (outfile.is_open()) {
			outfile <<	"               ,@@@@@@@,\n"
						"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
						"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
						"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
						"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
						"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
						"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
						"       |o|        | |         | |\n"
						"       |.|        | |         | |\n"
						"    \\\\/ .\\_\\/_\\/__/  ,\\_\\/\\/__\\\\/.  \\_\\/\\/__/"
			<< std::endl;
			outfile.close();
		}
		else {
			throw std::runtime_error("Creating file failed.");
		}
	}
	catch (const std::exception& e) {
		std::cout << "Cannot exec ShrubberyCreationForm: " << e.what() << std::endl;
	}
}

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationAForm::ShrubberyCreationAForm(): AForm() {
	//std::cout << "ShrubberyCreationAForm default constructor called." << std::endl;
}

ShrubberyCreationAForm::ShrubberyCreationAForm(std::string target): AForm("ShrubberyCreationAForm", 145, 137) {
	//std::cout << "ShrubberyCreationAForm constructor targeting [" << target << "] called with success." << std::endl;
	_target = target;
}

ShrubberyCreationAForm::ShrubberyCreationAForm(const ShrubberyCreationAForm &toCopy): AForm("ShrubberyCreationAForm", 145, 137), _target(toCopy._target) {
	//std::cout << "ShrubberyCreationAForm copy constructor called." << std::endl;
}

ShrubberyCreationAForm &ShrubberyCreationAForm::operator=(const ShrubberyCreationAForm &toCopy) {
	if (this != &toCopy) {
		_target = toCopy._target;
		//std::cout << "ShrubberyCreationAForm assignement constructor called." << std::endl;
	}
	return (*this); 
}

ShrubberyCreationAForm::~ShrubberyCreationAForm() {
	//std::cout << "ShrubberyCreationAForm [" << getName() << "] destructor called." << std::endl;
}

void		ShrubberyCreationAForm::execute(Bureaucrat const & executor) const {
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
		std::cout << "Cannot exec ShrubberyCreationAForm: " << e.what() << std::endl;
	}
}

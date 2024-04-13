#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): AForm(), _signed(0), _toSignRequiredGrade(145), _toExecRequiredGrade(137) {
	std::cout << "ShrubberyCreationForm default constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name): AForm(name, 1, 1), _name(name), _signed(0), _toSignRequiredGrade(145), _toExecRequiredGrade(137) {
	std::cout << "ShrubberyCreationForm constructor for [" << getName() << "] called with success." << std::endl;
}
// ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &toCopy) {
// 	std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
// }

// ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &toCopy) {
// 	std::cout << "ShrubberyCreationForm assignement constructor called." << std::endl;
// }

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm [" << getName() << "] destructor called." << std::endl;
}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	try {
		std::ofstream	outfile((executor.getName() + "_shrubbery").c_str());
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
		std::cout << "Error: " << e.what() << std::endl;
	}
}


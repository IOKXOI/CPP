#include "Harl.hpp"
#include <iostream>

Harl::Harl() {
	std::cout << "Harl default constructor called." << std::endl;
	array_ptr_ft[0] = &Harl::debug;
	array_ptr_ft[1] = &Harl::info;
	array_ptr_ft[2] = &Harl::warning;
	array_ptr_ft[3] = &Harl::error;

}

Harl::~Harl() {
	std::cout << "Harl destructor called." << std::endl;
}

void	Harl::debug() {
	std::cout << "I hate bug, i only eat them." << std::endl;
}

void	Harl::info() {
	std::cout << "Information." << std::endl;
}

void	Harl::warning() {
	std::cout <<  "Alert !" << std::endl;
}

void	Harl::error() {
	std::cout << "SEGFAULT." << std::endl;
}


int		Harl::filter( std::string level ) {
	int	i = 0;

	std::string array[4] = {"debug", "info", "warning", "error"};
	while (i < 4) {
		if (level == array[i]) {
			return (i);
		}
		i++;
	}
	return (4);
}

void	Harl::complain( int level ) {
	//while (level < 4) {
	(this->*array_ptr_ft[level])();
	//	level++;
	//}
}

void	Harl::complainFilter( std::string level) {
	int complainLevel = this->filter(level);
	switch(complainLevel) {
		case 0:
			complain(0);
		case 1:
			complain(1);
		case 2:
			complain(2);
		case 3:
			complain(3);
			break;
		default:
			std::cout << "Probably complaining about insignificant problems." << std::endl;
	}
}

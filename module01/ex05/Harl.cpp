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

void Harl::debug() {
	std::cout << "I hate bug, i only eat them." << std::endl;
}

void Harl::info() {
	std::cout << "Information." << std::endl;
}

void Harl::warning() {
	std::cout <<  "Alert !" << std::endl;
}

void Harl::error() {
	std::cout << "SEGFAULT." << std::endl;
}

void Harl::complain( std::string level ) {
	int	i = 0;

	std::string array[4] = {"debug", "info", "warning", "error"};
	while (i < 4) {
		if (level == array[i]) {
			(this->*array_ptr_ft[i])();
			return ;
		}
		i++;
	}
}

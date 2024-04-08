/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:37:45 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 02:50:21 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default constructor called." << std::endl;
	type = "wrong";
}

WrongAnimal::WrongAnimal(const WrongAnimal &toCopie) {
	std::cout << "WrongAnimal copie constructor called." << std::endl;
	type = toCopie.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &toCopie) {
	std::cout << "WrongAnimal assigment constructor called." << std::endl;
	if (this != &toCopie) {
		type = toCopie.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal default destructor called." << std::endl;
}

void	WrongAnimal::makeSound() const {
	std::cout << "Et dit donc Jamy !" << std::endl;
}

std::string		WrongAnimal::getType() const {
	return (type);
}

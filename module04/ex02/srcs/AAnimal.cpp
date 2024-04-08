/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:22:22 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 04:37:57 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "Default AAnimal constructor called." << std::endl;
	type = "AAnimal";
}

AAnimal::AAnimal(const AAnimal &toCopie) {
	type = toCopie.type;
}

AAnimal &AAnimal::operator=(const AAnimal &toCopie) {
	if (this != &toCopie) {
		std::cout << "AAnimal assigment constructor called." << std::endl;
		type = toCopie.type;
	}
	return (*this);
}

AAnimal::~AAnimal() {
	std::cout << "Default AAnimal destructor called." << std::endl;
}

std::string AAnimal::getType() const{
	return (type);
}

void AAnimal::makeSound() const{
	std::cout << "O_O" << std::endl;
}

std::ostream &operator<<(std::ostream &os, AAnimal &AAnimal) {
	std::cout << AAnimal.getType() << std::endl;
	return (os);
}

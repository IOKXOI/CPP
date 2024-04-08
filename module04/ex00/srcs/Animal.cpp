/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:22:22 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 02:35:40 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Default animal constructor called." << std::endl;
	type = "animal";
}

Animal::Animal(const Animal &toCopie) {
	type = toCopie.type;
}

Animal &Animal::operator=(const Animal &toCopie) {
	if (this != &toCopie) {
		std::cout << "Animal assigment constructor called." << std::endl;
		type = toCopie.type;
	}
	return (*this);
}

Animal::~Animal() {
	std::cout << "Default animal destructor called." << std::endl;
}

std::string Animal::getType() const{
	return (type);
}

void Animal::makeSound() const{
	std::cout << "O_O" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Animal &Animal) {
	std::cout << Animal.getType() << std::endl;
	return (os);
}

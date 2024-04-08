/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:55 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 02:32:51 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called." << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &toCopie): Animal() {
	std::cout << "Dog copie constructor called." << std::endl;
	type = toCopie.type;
}

Dog &Dog::operator=(const Dog &toCopie) {
	if (this != &toCopie) {
		type = toCopie.type;
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Default Dog destructor called." << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Wouaf 🐶" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Dog &Animal) {
	std::cout << Animal.getType() << std::endl;
	return (os);
}

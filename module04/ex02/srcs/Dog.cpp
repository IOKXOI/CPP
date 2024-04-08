/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:55 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 09:40:23 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): AAnimal() {
	std::cout << "Dog default constructor called." << std::endl;
	type = "Dog";
	_brain = new (Brain);
}

Dog::Dog(const Dog &toCopie): AAnimal() {
	std::cout << "Dog copie constructor called." << std::endl;
	type = toCopie.type;
	this->_brain = new Brain(*toCopie._brain);
}

Dog &Dog::operator=(const Dog &toCopie) {
	std::cout << "Dog assignement constructor called." << std::endl;
	if (this != &toCopie) {
		type = toCopie.type;
		if (_brain != 0){
			delete this->_brain;
			_brain = 0;	
		}
		_brain = new Brain(*toCopie._brain);
	}
	return (*this);
}

Dog::~Dog() {
	if (_brain != 0)
		delete this->_brain;
	std::cout << "Default Dog destructor called." << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Wouaf 🐶" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Dog &AAnimal) {
	std::cout << AAnimal.getType() << std::endl;
	return (os);
}

Brain* Dog::get_brain(){
	return _brain;
}

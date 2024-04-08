/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:55 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 09:42:49 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): AAnimal() {  
	std::cout << "Cat constructor called." << std::endl;
	type = "Cat";
	_brain = new (Brain);
}

Cat::Cat(const Cat &toCopie): AAnimal() {
	std::cout << "Cat copie constructor called." << std::endl;
	type = toCopie.type;
	this->_brain = new Brain(*toCopie._brain);
}

Cat& Cat::operator=(const Cat &toCopie) {
	std::cout << "Cat assignment constructor called." << std::endl;
	if (this != &toCopie) {
		type = toCopie.type;
		delete _brain;
		_brain = new Brain(*toCopie._brain);
	}
	return (*this);
}

Cat::~Cat() {
	delete _brain;
	std::cout << "Default Cat destructor called." << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow 🐱" << std::endl;
}


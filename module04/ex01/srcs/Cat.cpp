/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:55 by greengo           #+#    #+#             */
/*   Updated: 2023/09/28 12:06:24 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal("Cat"), _brain(new Brain()) {  
    std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(const Cat &toCopie): Animal("Cat") {
    std::cout << "Cat copie constructor called." << std::endl;
    _brain = new Brain(*toCopie._brain);
}

Cat &Cat::operator=(const Cat &toCopie) {
    std::cout << "Cat assignment constructor called." << std::endl;
    if (this != &toCopie) {
        delete _brain;
        _brain = new Brain(*toCopie._brain);
    }
    return (*this);
}

Cat::~Cat() {
    delete _brain;
    std::cout << "Default cat destructor called." << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Meow" << std::endl;
}

//
void    Cat::setIdea(const std::string idea) {
    _brain->setIdea(idea);
}

std::string    Cat::getIdea(uint8_t ideaIndex) const{
    return(_brain->ideas[ideaIndex]);
}
//

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:55 by greengo           #+#    #+#             */
/*   Updated: 2023/09/30 11:37:39 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal("Cat") {  
    std::cout << "Cat constructor called." << std::endl;
    _brain = new (Brain);
}

Cat::Cat(const Cat &toCopie): Animal("Cat") {
    std::cout << "Cat copie constructor called." << std::endl;
    this->_brain = new Brain(*toCopie._brain);
}

Cat& Cat::operator=(const Cat &toCopie) {
    std::cout << "Cat assignment constructor called." << std::endl;
    if (this != &toCopie) {
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
    std::cout << "Meow" << std::endl;
}

//
void    Cat::setIdea(const std::string idea) {
    _brain->setIdea(idea);
}

std::string    Cat::getIdea(uint8_t ideaIndex) const {
    return("\033[36m" + _brain->ideas[ideaIndex] + "\033[0m");
}

Cat* Cat::clone() const {
    std::cout << "Using Cat polymorphic clonage." << std::endl;
    return(new Cat(*this));
}

Cat* Cat::clone(Animal *toDelete) const {
    std::cout << "Using Cat polymorphic clonage." << std::endl;
    delete toDelete;
    return(new Cat(*this));
}

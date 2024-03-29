/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:55 by greengo           #+#    #+#             */
/*   Updated: 2023/10/18 02:10:17 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): AAnimal("Cat") {  
    std::cout << "Cat constructor called." << std::endl;
    _brain = new (Brain);
}

Cat::Cat(const Cat &toCopy): AAnimal("Cat") {
    std::cout << "Cat copie constructor called." << std::endl;
    this->_brain = new Brain(*toCopy._brain); 
}

Cat::Cat(const AAnimal &toCopy): AAnimal(toCopy) {
    std::cout << "Cat copie constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat &toCopy) {
    std::cout << "Cat assignment constructor called." << std::endl;
    if (this != &toCopy) {
        delete _brain;
        _brain = new Brain(*toCopy._brain);
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

Cat* Cat::clone_cat() const {
    std::cout << "Using Cat polymorphic copie clonage." << std::endl;
    return(new Cat(*this));
}

Cat* Cat::clone_cat(const AAnimal *toDelete) const {
    std::cout << "Using Cat polymorphic assignement clonage ." << std::endl;
    delete toDelete;
    return(new Cat(*this));
}

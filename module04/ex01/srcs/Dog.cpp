/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:55 by greengo           #+#    #+#             */
/*   Updated: 2023/09/30 13:17:04 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
    std::cout << "Dog constructor called." << std::endl;
    _brain = new Brain();
}

Dog::Dog(const Dog &toCopie): Animal("Dog") {
    std::cout << "Dog copie constructor called." << std::endl;
    _brain = new Brain(*toCopie._brain);
}

Dog &Dog::operator=(const Dog &toCopie) {
    std::cout << "Dog assigment constructor called." << std::endl;
    if (this != &toCopie) {
        delete _brain;
        _brain = new Brain(*toCopie._brain);
    }
    return (*this);
}

Dog::~Dog() {
    std::cout << "Default Dog destructor called." << std::endl;
    delete _brain;
}

void Dog::makeSound() const{
    std::cout << "Wouaf" << std::endl;
}


///
void Dog::setIdea(const std::string idea) {
    _brain->setIdea(idea);
}

std::string Dog::getIdea(uint8_t ideaIndex) const{
    return("\033[36m" + _brain->ideas[ideaIndex] + "\033[0m");
}

Dog* Dog::clone() const{
    std::cout << "Using Dog polymorphic copie clonage." << std::endl;
    return (new Dog(*this));
}

Dog* Dog::clone(Animal *toDelete) const{
    std::cout << "Using Dog polymorphic assignement clonage." << std::endl;
    delete toDelete;
    return (new Dog(*this));
}
///
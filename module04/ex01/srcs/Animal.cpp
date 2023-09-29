/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:22:22 by greengo           #+#    #+#             */
/*   Updated: 2023/09/29 22:24:10 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Default animal constructor called." << std::endl;
    _type = "Animal";
}

Animal::Animal(const std::string type) {
    std::cout << "Animal constructor from outside." << std::endl;
    _type = type;
}

Animal::Animal(const Animal &toCopie) {
    std::cout << "Animal copie constructor called." << std::endl;
    _type = toCopie._type;
}

Animal &Animal::operator=(const Animal &toCopie) { 
    if (this != &toCopie) {
        std::cout << "Animal assigment personalized constructor called." << std::endl;
       delete (this);
    }
    return (*toCopie.clone());
}

Animal::~Animal() {
    std::cout << "Default Animal destructor called." << std::endl;
}

std::string Animal::gettype() const {
    return (_type);
}

void Animal::makeSound() const {
    std::cout << "Hiou I'm Animal" << std::endl;
}

//
void Animal::setIdea(const std::string idea) {
    (void)idea;
    return;
}
std::string Animal::getIdea(uint8_t ideaIndex) const{
    (void)ideaIndex;
    return ("No brain.");
}

Animal* Animal::clone() const {
    std::cout << "Using Animal polymorphic clonage." << std::endl;
    return (new Animal(*this));
}

std::ostream &operator<<(std::ostream &os, const Animal &Animal) {
    std::cout << Animal.gettype() << std::endl;
    return (os);
}
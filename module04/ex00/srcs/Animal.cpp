/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:22:22 by greengo           #+#    #+#             */
/*   Updated: 2023/09/21 18:34:42 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Default animal constructor called." << std::endl;
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

std::string Animal::gettype() {
    return (type);
}

void Animal::makeSound() const{
    std::cout << "Hiou je suis un animal" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Animal &Animal) {
    std::cout << Animal.gettype() << std::endl;
    return (os);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:55 by greengo           #+#    #+#             */
/*   Updated: 2023/09/21 18:34:52 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat default constructor called." << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat &toCopie): Animal() {
    std::cout << "Cat copie constructor called." << std::endl;
    type = toCopie.type;
}

Cat &Cat::operator=(const Cat &toCopie) {
    if (this != &toCopie) {
        type = toCopie.type;
    }
    return (*this);
}

Cat::~Cat() {
    std::cout << "Default cat destructor called." << std::endl;
}

std::string Cat::gettype() {
    return (type);
}

void Cat::makeSound() const{
    std::cout << "Miaous" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Cat &Animal) {
    std::cout << Animal.gettype() << std::endl;
    return (os);
}

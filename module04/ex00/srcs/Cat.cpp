/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:55 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 10:48:46 by sydauria         ###   ########.fr       */
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

void Cat::makeSound() const{
    std::cout << "Meow 🐱" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Cat &Animal) {
    std::cout << Animal.getType() << std::endl;
    return (os);
}

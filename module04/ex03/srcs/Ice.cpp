/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:50:58 by greengo           #+#    #+#             */
/*   Updated: 2023/10/18 12:22:00 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
    std::cout << "Ice default constructor called." << std::endl;
    _type = "ice";
}

Ice::Ice(const Ice &toCopy): AMateria(toCopy) {
    std::cout << "Brain copie constructor called." << std::endl;
    _type = toCopy._type;
}

Ice &Ice::operator=(const Ice &toCopy) {
    if (this != &toCopy) {
        std::cout << "Ice assigment constructor called." << std::endl;
    }
return (*this);
}

Ice::~Ice() {
    std::cout << "Default Ice destructor called." << std::endl;
}

std::string const &Ice::getType(void) const {
    return (this->_type);
}

AMateria* Ice::clone() const {
    std::cout << "Ice clone constructor called." << std::endl;
    return (new Ice(*this));
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " 
    << target.getName()
    << " *"
    << std::endl;
}
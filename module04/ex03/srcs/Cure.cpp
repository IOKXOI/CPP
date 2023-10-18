/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:29:26 by greengo           #+#    #+#             */
/*   Updated: 2023/10/18 12:21:55 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure") {
    std::cout << "Cure default constructor called." << std::endl;
    _type = "cure";
}

Cure::Cure(const Cure &toCopy): AMateria(toCopy) {
    std::cout << "Cure copie constructor called." << std::endl;
    _type = toCopy._type;
}

Cure &Cure::operator=(const Cure &toCopy) {
    if (this != &toCopy) {
        std::cout << "Cure assigment constructor called." << std::endl;
        _type = toCopy._type;
    }
return (*this);
}

Cure::~Cure() {
    std::cout << "Default Cure destructor called." << std::endl;
}

std::string const &Cure::getType(void) const {
    return (_type);
}        

AMateria* Cure::clone() const {
    std::cout << "Cure clone constructor called." << std::endl;
    return (new Cure(*this));
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals "
    << target.getName()
    << "'s wounds *"
    << std::endl;
} 
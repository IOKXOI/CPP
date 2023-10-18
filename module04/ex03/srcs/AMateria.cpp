/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 22:36:05 by greengo           #+#    #+#             */
/*   Updated: 2023/10/18 02:10:42 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
    std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria(const AMateria &toCopy) {
    std::cout << "Brain copie constructor called." << std::endl;
    _type = toCopy._type;
}

AMateria &AMateria::operator=(const AMateria &toCopy) {
    if (this != &toCopy) {
        std::cout << "AMateria assigment constructor called." << std::endl;
    }
return (*this);
}

AMateria::~AMateria() {
    std::cout << "Default AMateria destructor called." << std::endl;
}

AMateria::AMateria(std::string const &type) {
    std::cout << "AMateria type constructor called." << std::endl;
    _type = type;
}

std::string const &AMateria::getType(void) const {
    return (this->_type);
}

void AMateria::settype(std::string type) {
    _type = type;
}

void AMateria::use(ICharacter &target) {
    std::cout << "Use AMateria on " << target.getName() << "." << std::endl;
}

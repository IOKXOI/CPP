/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:40:56 by greengo           #+#    #+#             */
/*   Updated: 2023/10/19 10:28:37 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    std::cout << "Named Weapon constructor" << std::endl;    
    this->_type = type;
}

Weapon::~Weapon() {
    std::cout << "Default Weapon destructor called." << std::endl;    
}

const std::string &Weapon::getType() const{
    return (_type);
}

void Weapon::setType(std::string type) {
    this->_type = type;
}
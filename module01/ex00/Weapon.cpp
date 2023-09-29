/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:40:56 by greengo           #+#    #+#             */
/*   Updated: 2023/07/05 13:55:30 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name) {
    this->_type = name;
}

Weapon::~Weapon(void) {}

std::string Weapon::getType(void) {
    return (_type);
}

void Weapon::setType(std::string type) {
    this->_type = type;
}
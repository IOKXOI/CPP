/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:53:24 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 14:58:33 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
    std::cout << "Character default constructor called." << std::endl;
    for (uint8_t idx = 0; idx < 4; idx++) {
        _inventory[idx]= 0;
    }
}

Character::Character(const Character &toCopy): ICharacter(toCopy) {
    std::cout << "Character copie constructor called." << std::endl;
    for (uint8_t idx = 0; idx < 4; idx++) {
        delete(_inventory[idx]);
        _inventory[idx] = toCopy._inventory[idx]->clone();
        delete(_inventory[idx]);
        _inventory[idx] = toCopy._inventory[idx]->clone();
        delete(_inventory[idx]);
        _inventory[idx] = toCopy._inventory[idx]->clone();
        delete(_inventory[idx]);
        _inventory[idx] = toCopy._inventory[idx]->clone();
    }
}

Character &Character::operator=(const Character &toCopy) {
    if (this != &toCopy) {
        std::cout << "Character assigment constructor called." << std::endl;

    }
return (*this);
}

Character::~Character() {
    std::cout << "Default Character destructor called." << std::endl;
    for (uint8_t idx = 0; idx < 4; idx++) {
        delete _inventory[idx];
    }
}

Character::Character(std::string name) {
    std::cout << "Character name constructor called." << std::endl;
    _name = name;
    std::cout << name <<" created." << std::endl;  
    for (uint8_t idx = 0; idx < 4; idx++) {
        _inventory[idx] = 0;
    }
}

std::string const &Character::getName() const {
    return (_name);
}

void Character::equip(AMateria* materia) {
    for (uint8_t idx = 0; idx < 4; idx++) {
        if (!_inventory[idx]) {
            _inventory[idx] = materia;
            std::cout << "New " << materia->getType() << " materia added in " << this->getName() << "'s inventory." << std::endl;
            return ;
        }
    }
    std::cout << "Inventory already full." << std::cout;
}

void Character::unequip(uint8_t idx) {
    if (_inventory[idx]) {
        _inventory[idx] = 0;
    }
    else {
        std::cout << "No materia in this pocket." << std::cout;
    }
}

void Character::use (int idx, ICharacter &target) {
    if (_inventory[idx])
        _inventory[idx]->use(target);
    else
        std::cout << "No materia equiped" << std::endl;
} 

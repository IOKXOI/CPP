/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 04:11:27 by greengo           #+#    #+#             */
/*   Updated: 2023/11/13 17:00:00 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy) {
    std::cout << "ClapTrap copie constructor called." << std::endl;
    _name = toCopy.getName();
    _attack = toCopy.getAttack();
    _energy = toCopy.getEnergy();
    _hp = toCopy.getHp();
}

ClapTrap &ClapTrap::operator=(const ClapTrap &toCopy) {
    if (this != &toCopy) {
        std::cout << "ClapTrap assigment constructor called." << std::endl;
        _name = toCopy.getName();
        _attack = toCopy.getAttack();
        _energy = toCopy.getEnergy();
        _hp = toCopy.getHp();
    }
return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "Default ClapTrap destructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _energy(10), _attack(0) {
    std::cout << "ClapTrap named constructor called." << std::endl;
}

std::string ClapTrap::getName() const{
    return (_name);
}

uint32_t     ClapTrap::getAttack() const{
    return(_attack);
}

uint32_t     ClapTrap::getEnergy() const{
    return(_energy);
}

int32_t     ClapTrap::getHp() const{
    return(_hp);
}

void    ClapTrap::setAttackDamage(uint32_t amount) {
    _attack = amount;
}
        
void    ClapTrap::attack(const std::string& target) {
    if (_energy > 0 && _hp > 0) {
        std::cout
        << "ClapTrap "
        << _name
        << " attacks "
        << target
        << ", causing "
        << _attack
        << " points of damage!" << std::endl;
        _energy -= 1;
    }
    else if (_energy <= 0 ) {
        std::cout << _name << " have no enought energy for attack." << std::endl;
    }
    else
        std::cout << _name << " have no enought heal for attack." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout
    << "ClapTrap "
    << _name 
    << " took "
    << amount;
    _hp -= amount;
    if (_attack > 1) {
        std::cout << " damages." << std::endl;
    }
    else {
        std::cout << " damage." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (_energy > 0 && _hp > 0) {
    std::cout
    << "ClapTrap "
    << _name
    << " get repaired and restore "
    << amount
    << " HP."
    << std::endl;
    _energy -= 1;
    _hp += amount;
    }
    else if (_energy <= 0 ) {
        std::cout << _name << " have no enought energy for repair." << std::endl;
    }
    else {
        std::cout << _name << " have no enought heal for repair." << std::endl;
    }
}

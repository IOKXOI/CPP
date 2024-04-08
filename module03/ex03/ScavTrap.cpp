#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
    std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &toCopy): ClapTrap() {
    std::cout << "ScavTrap copie constructor called." << std::endl;
    _name = toCopy.getName();
    _attack = toCopy.getAttack();
    _energy = toCopy.getEnergy();
    _hp = toCopy.getHp();
}

ScavTrap &ScavTrap::operator=(const ScavTrap &toCopy) {
    if (this != &toCopy) {
        std::cout << "ScavTrap assigment constructor called." << std::endl;
        _name = toCopy.getName();
        _attack = toCopy.getAttack();
        _energy = toCopy.getEnergy();
        _hp = toCopy.getHp();
    }
return (*this);
}

ScavTrap::~ScavTrap() {
    std::cout << "Default ScavTrap destructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    _hp = 100;
    _energy = 50;
    _attack = 20;
    std::cout << "ScavTrap named: " << _name << "  constructor called." << std::endl;
}

void    ScavTrap::attack(const std::string& target) {
    if (_energy > 0 && _hp > 0) {
        std::cout
        << "ScavTrap "
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

void    ScavTrap::guardGate(){
    if (_hp <= 0) {
        std::cout << _name << " is dead." << std::endl;
        return;
    }
    else if (_energy <= 0) {
        std::cout << _name << " is sleeping" << std::endl;
        return;
    }
    std::cout << "I'am the guardian !" << std::endl;
}

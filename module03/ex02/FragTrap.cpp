#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
    std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &toCopy): ClapTrap() {
    std::cout << "FragTrap copie constructor called." << std::endl;
    _name = toCopy.getName();
    _attack = toCopy.getAttack();
    _energy = toCopy.getEnergy();
    _hp = toCopy.getHp();
}

FragTrap &FragTrap::operator=(const FragTrap &toCopy) {
    if (this != &toCopy) {
        std::cout << "FragTrap assigment constructor called." << std::endl;
        _name = toCopy.getName();
        _attack = toCopy.getAttack();
        _energy = toCopy.getEnergy();
        _hp = toCopy.getHp();
    }
return (*this);
}

FragTrap::~FragTrap() {
    std::cout << "Default FragTrap destructor called." << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    _hp = 100;
    _energy = 100;
    _attack = 30;
    std::cout << "FragTrap named constructor called." << std::endl;
}

void    FragTrap::attack(const std::string& target) {
    if (_energy > 0 && _hp > 0) {
        std::cout
        << "FragTrap "
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

void    FragTrap::highFivesGuys(){
    if (_hp <= 0) {
        std::cout << _name << " is dead." << std::endl;
        return;
    }
    else if (_energy <= 0) {
        std::cout << _name << " is sleeping" << std::endl;
        return;
    }
    std::cout << "Give me five! Panam - Charlouze, les connections se font." << std::endl;
}

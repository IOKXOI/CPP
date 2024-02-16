#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &toCopy) {
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

ScavTrap::ScavTrap(std::string name): _name(name), _hp(100), _energy(50), _attack(20) {
    std::cout << "ScavTrap named constructor called." << std::endl;
}
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap() {
    std::cout << "DiamondTrap default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &toCopy): ScavTrap(), FragTrap() {
    std::cout << "DiamondTrap copie constructor called." << std::endl;
    _name = toCopy.getName();
    _attack = toCopy.getAttack();
    _energy = toCopy.getEnergy();
    _hp = toCopy.getHp();
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &toCopy) {
    if (this != &toCopy) {
        std::cout << "DiamondTrap assigment constructor called." << std::endl;
        _name = toCopy.getName();
        _attack = toCopy.getAttack();
        _energy = toCopy.getEnergy();
        _hp = toCopy.getHp();
    }
return (*this);
}

DiamondTrap::~DiamondTrap() {
    std::cout << "Default DiamondTrap destructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name") {
    _hp = 100;
    _energy = 50;
    _attack = 30;
    _name = name;
    std::cout << "DiamondTrap named: " << getName() << "  constructor called." << std::endl;
}

void    DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void   DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << _name << std::endl;
    std::cout << "ClapTrap name: " << getName() << std::endl;
}

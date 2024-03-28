#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap() {
    std::cout << "DiamondTrap default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &toCopy): ClapTrap() {
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

DiamondTrap::DiamondTrap(std::string name): ScavTrap::ScavTrap(), FragTrap(), _name(ClapTrap::getName()), _hp(FragTrap::getHp), _energy(ScavTrap::getEnergy), _attack(FragTrap::getAttack) {
    std::cout << "DiamondTrap named constructor called." << std::endl;
}

std::string DiamondTrap::getName() const{
    return (_name);
}

uint32_t     DiamondTrap::getAttack() const{
    return(_attack);
}

uint32_t     DiamondTrap::getEnergy() const{
    return(_energy);
}

int32_t     DiamondTrap::getHp() const{
    return(_hp);
}

void    DiamondTrap::highFivesGuys(){
    std::cout << "Give me five! Panam - Charlouze, les connections se font." << std::endl;
}

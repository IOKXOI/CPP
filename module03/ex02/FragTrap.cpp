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

FragTrap::FragTrap(std::string name): _name(name), _hp(100), _energy(100), _attack(30) {
    std::cout << "FragTrap named constructor called." << std::endl;
}

std::string FragTrap::getName() const{
    return (_name);
}

uint32_t     FragTrap::getAttack() const{
    return(_attack);
}

uint32_t     FragTrap::getEnergy() const{
    return(_energy);
}

int32_t     FragTrap::getHp() const{
    return(_hp);
}

void    FragTrap::highFivesGuys(){
    std::cout << "Give me five! Panam - Charlouze, les connections se font." << std::endl;
}
# pragma once
# include "ClapTrap.hpp"

class ScavTrap: ClapTrap {
	ScavTrap();
	ScavTrap(const ScavTrap &toCopy);
	ScavTrap& operator=(const ScavTrap &toCopy);
	virtual ~ScavTrap();
    ScavTrap(std::string name);

 	void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);  
    std::string getName() const;
    uint32_t    getAttack() const;
    uint32_t    getEnergy() const;
    int32_t     getHp() const;
    void        setAttackDamage(uint8_t amount);
};
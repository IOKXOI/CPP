# pragma once
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	ScavTrap();
	ScavTrap(const ScavTrap &toCopy);
	ScavTrap& operator=(const ScavTrap &toCopy);
	virtual ~ScavTrap();
    ScavTrap(std::string name);

 	void        attack(const std::string& target);
    void        guardGate();
};

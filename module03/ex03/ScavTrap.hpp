# pragma once
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(const ScavTrap &toCopy);
		ScavTrap(std::string name);
		virtual ~ScavTrap();
		ScavTrap& operator=(const ScavTrap &toCopy);
	
		virtual void	attack(const std::string& target);
		void			guardGate();
};

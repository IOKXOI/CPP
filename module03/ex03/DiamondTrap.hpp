# pragma once
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"


class DiamondTrap: public ScavTrap, public FragTrap {
	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap &toCopy);
		DiamondTrap(std::string name);
		virtual ~DiamondTrap();
		DiamondTrap& operator=(const DiamondTrap &toCopy);

		virtual void	attack(const std::string& target);
		void			whoAmI();

	private:
		std::string	_name;
};
